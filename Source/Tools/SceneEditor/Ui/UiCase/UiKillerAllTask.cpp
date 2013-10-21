//////////////////////////////////////////////////////////////////////////////////////
//	文件名			:	UiKillerAllTask.cpp
//	创建人			:	王西贝
//	创建时间		:	2003-12-26 10:51:08
//	文件说明		:	查看所有通缉任务的对话框实现
//////////////////////////////////////////////////////////////////////////////////////

#include "KWin32.h"
#include "UiKillerAllTask.h"
#include "KIniFile.h"
#include "../Elem/AutoLocateWnd.h"
#include "../Elem/WndMessage.h"
#include "../Elem/Wnds.h"
#include "../UiBase.h"
#include "../UiSoundSetting.h"
#include "../../../Core/Src/CoreShell.h"
#include "../../../Core/Src/GameDataDef.h"

#include <vector>


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

////////////////////////////////////////////////////////////////////////////////

extern iCoreShell*		g_pCoreShell;

#define SCHEME_INI_ALLTASK		"通缉接收任务主界面.ini"

KUiKillerAllTask* KUiKillerAllTask::m_pSelf = NULL;

void WPrintMoney(char* szBuf, int nMoney)
{
	szBuf[0] = 0;
	if (nMoney < 0)
	{
		sprintf(szBuf, "负");
		nMoney = -nMoney;
	}
	if (nMoney >= 10000)
	{
		sprintf(szBuf + strlen(szBuf), "%d万", nMoney / 10000);
		if (nMoney % 10000)
			sprintf(szBuf + strlen(szBuf), "%04d两", nMoney % 10000);
		else
			sprintf(szBuf + strlen(szBuf), "两");
	}
	else
		sprintf(szBuf + strlen(szBuf), "%d两", nMoney);
}

KUiKillerAllTask* KUiKillerAllTask::OpenWindow()
{
	if (m_pSelf == NULL)
	{
		m_pSelf = new KUiKillerAllTask;
		if (m_pSelf)
			m_pSelf->Initialize();
	}

	if (m_pSelf)
	{
		UiSoundPlay(UI_SI_WND_OPENCLOSE);
		m_pSelf->ClearData();
		m_pSelf->Show();
		m_pSelf->BringToTop();
	}
	return m_pSelf;
}

void KUiKillerAllTask::CloseWindow(bool bDestroy)
{
	if (m_pSelf)
	{
		m_pSelf->Hide();
		if (bDestroy)
		{
			m_pSelf->Destroy();
			m_pSelf = NULL;
		}
	}
}

KUiKillerAllTask* KUiKillerAllTask::GetIfVisible()
{
	if (m_pSelf && m_pSelf->IsVisible())
		return m_pSelf;
	else
		return NULL;
}

void KUiKillerAllTask::LoadScheme(const char* pScheme)
{
	if (m_pSelf)
	{
		char		Buff[128];
		KIniFile	Ini;
		sprintf(Buff, "%s\\%s", pScheme, SCHEME_INI_ALLTASK);
		if (Ini.Load(Buff))
		{
			m_pSelf->Init(&Ini, "Main");
			m_pSelf->m_SortByRewardBtn.Init(&Ini, "RewardBtn");
			m_pSelf->m_SortByTargetBtn.Init(&Ini, "TargetBtn");
			m_pSelf->m_TaskList.Init(&Ini, "TaskList");
			m_pSelf->m_TaskListCtrl.Init(&Ini, "TaskListScroll");
			m_pSelf->m_AcceptBtn.Init(&Ini, "AcceptBtn");
			m_pSelf->m_LeaveBtn.Init(&Ini, "LeaveBtn");
		}
	}
	return;
}

void KUiKillerAllTask::Initialize()
{
	AddChild(&m_SortByRewardBtn);
	AddChild(&m_SortByTargetBtn);
	AddChild(&m_TaskList);
	AddChild(&m_TaskListCtrl);
	AddChild(&m_AcceptBtn);
	AddChild(&m_LeaveBtn);

	m_TaskList.SetScrollbar(&m_TaskListCtrl);
	m_TaskListCtrl.Enable(false);

	char Scheme[256];
	g_UiBase.GetCurSchemePath(Scheme, 256);
	LoadScheme(Scheme);

	Wnd_AddWindow(this);
	return;
}

int KUiKillerAllTask::WndProc(unsigned int uMsg, unsigned int uParam, int nParam)
{
	switch(uMsg)
	{
	case WND_N_BUTTON_CLICK:
		if (!m_bRecvOver)
			break;
		if (uParam == (unsigned int)(KWndWindow*)&m_LeaveBtn)
			CloseWindow(true);
		else if (uParam == (unsigned int)(KWndWindow*)&m_AcceptBtn)
		{
			int nCurSel = m_TaskList.GetCurSel();
			if (nCurSel >= 0)
				g_pCoreShell->OperationRequest(GOI_KILLER_TAKETASK, m_pTasks[nCurSel].task.dwTaskID, 0);
		}
		else if (uParam == (unsigned int)(KWndWindow*)&m_SortByRewardBtn)
		{
			if (m_bSortByReward)
				m_bSortIncrease = !m_bSortIncrease;
			else
				m_bSortByReward = TRUE;
			ResortList();
		}
		else if (uParam == (unsigned int)(KWndWindow*)&m_SortByTargetBtn)
		{
			if (!m_bSortByReward)
				m_bSortIncrease = !m_bSortIncrease;
			else
				m_bSortByReward = FALSE;
			ResortList();
		}
		break;
	case WND_N_SCORLLBAR_POS_CHANGED:
		if (uParam == (unsigned int)(KWndWindow*)&m_TaskListCtrl)
			m_TaskList.SetTopItemIndex(nParam);
		break;
	default:
		return KWndShowAnimate::WndProc(uMsg, uParam, nParam);
	}
	return 0;
}

void KUiKillerAllTask::ClearData()
{
	m_bRecvOver = FALSE;
	m_TaskList.SetContent(NULL, 0, 0, 0);
	m_nCurTaskNum = m_nCurTaskNumMax = 0;
	if (m_pTasks)
	{
		delete m_pTasks;
		m_pTasks = NULL;
	}
}

void KUiKillerAllTask::ResortList()
{
	if (m_nCurTaskNum == 0)
		return;

	std::vector<KILLER_TASK> backup;
	int i;
	for (i = 0; i < m_nCurTaskNum; i++)
	{
		if (i == 0)
			m_pTasks[i].task.byPart = 0;
		else
			m_pTasks[i].task.byPart = 1;
		backup.push_back(m_pTasks[i].task);
	}
	m_pTasks[0].task.byPart = 2;
	backup.push_back(m_pTasks[0].task);

	//recreate list
	ClearData();
	for (i = 0; i < (int)backup.size(); i++)
		ReceiveTask(&backup[i]);
}

void KUiKillerAllTask::PushInSortedList(KILLER_TASK* pTask)
{
	m_TaskList.SetContent(NULL, 0, 0, 0);
	if (m_nCurTaskNum == m_nCurTaskNumMax)
	{
		m_nCurTaskNumMax += 32;
		if (m_pTasks)
		{
			KILLER_TASK_ITEM* pBack = m_pTasks;
			m_pTasks = new KILLER_TASK_ITEM[m_nCurTaskNumMax];
			memcpy(m_pTasks, pBack, sizeof(KILLER_TASK_ITEM) * m_nCurTaskNum);
			delete pBack;
		}
		else
		{
			m_pTasks = new KILLER_TASK_ITEM[m_nCurTaskNumMax];
		}
	}

	int i;
	for (i = 0; i < m_nCurTaskNum; i++)
	{
		if (m_pTasks[i].task.byType != pTask->byType)
			continue;
		if (m_bSortByReward)
		{
			if (m_pTasks[i].task.nTaskReward < pTask->nTaskReward)
			{
				if (m_bSortIncrease)
					continue;
				else
					break;
			}
			else
			{
				if (!m_bSortIncrease)
					continue;
				else
					break;
			}
		}
		else
		{
			if (strcmp(m_pTasks[i].task.szTargetName, pTask->szTargetName) < 0)
			{
				if (m_bSortIncrease)
					continue;
				else
					break;
			}
			else
			{
				if (!m_bSortIncrease)
					continue;
				else
					break;
			}
		}
	}

	if (i < m_nCurTaskNum)	//insert
		memmove(m_pTasks + i + 1, m_pTasks + i, (m_nCurTaskNum - i) * sizeof(KILLER_TASK_ITEM));
	//else					//append
	//	;

	m_pTasks[i].task = *pTask;
	m_pTasks[i].szListItemText[0] = 0;

	::WPrintMoney(m_pTasks[i].szListItemText, pTask->nTaskReward);

	//add space to align column text
#define FIRST_COL_WIDTH	27
	for (int j = strlen(m_pTasks[i].szListItemText); j < FIRST_COL_WIDTH; j++)
		m_pTasks[i].szListItemText[j] = ' ';
	sprintf(m_pTasks[i].szListItemText + FIRST_COL_WIDTH, "%s", pTask->szTargetName);

	m_nCurTaskNum++;

	m_TaskList.SetContent((BYTE*)m_pTasks, m_nCurTaskNum, sizeof(m_pTasks[0]), (int)(&(((KILLER_TASK_ITEM*)NULL)->szListItemText)));
}

void KUiKillerAllTask::ReceiveTask(KILLER_TASK* pTask)	//物品变化更新
{
	if (pTask->byPart == 0)			//Head
	{
		_ASSERT(m_bRecvOver == 0 && m_nCurTaskNum == 0);
		ClearData();
		PushInSortedList(pTask);
	}
	else if (pTask->byPart == 1)	//Mid
	{
		_ASSERT(m_bRecvOver == 0 && m_nCurTaskNum != 0);
		PushInSortedList(pTask);
	}
	else							//Tail
	{
		_ASSERT(pTask->byPart == 2);
		m_bRecvOver = TRUE;
	}
}
