// CntrItem.h : interface of the KSceneEditorCntrItem class
//

#if !defined(AFX_CNTRITEM_H__FDC78DF2_1A3B_402A_87E4_F3287E87EDD2__INCLUDED_)
#define AFX_CNTRITEM_H__FDC78DF2_1A3B_402A_87E4_F3287E87EDD2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class KSceneEditorView;
class KSceneEditorDoc;


class KSceneEditorCntrItem : public COleClientItem
{
	DECLARE_SERIAL(KSceneEditorCntrItem)

// Constructors
public:
	KSceneEditorCntrItem(KSceneEditorDoc* pContainer = NULL);
		// Note: pContainer is allowed to be NULL to enable IMPLEMENT_SERIALIZE.
		//  IMPLEMENT_SERIALIZE requires the class have a constructor with
		//  zero arguments.  Normally, OLE items are constructed with a
		//  non-NULL document pointer.

// Attributes
public:
	KSceneEditorDoc* GetDocument()
		{ return (KSceneEditorDoc*)COleClientItem::GetDocument(); }
	KSceneEditorView* GetActiveView()
		{ return (KSceneEditorView*)COleClientItem::GetActiveView(); }

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(KSceneEditorCntrItem)
	public:
	virtual void OnChange(OLE_NOTIFICATION wNotification, DWORD dwParam);
	virtual void OnActivate();
	protected:
	virtual void OnGetItemPosition(CRect& rPosition);
	virtual void OnDeactivateUI(BOOL bUndoable);
	virtual BOOL OnChangeItemPosition(const CRect& rectPos);
	//}}AFX_VIRTUAL

// Implementation
public:
	~KSceneEditorCntrItem();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	virtual void Serialize(CArchive& ar);
	DECLARE_MESSAGE_MAP()
	afx_msg void OnBnClickedLvf();
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CNTRITEM_H__FDC78DF2_1A3B_402A_87E4_F3287E87EDD2__INCLUDED_)
