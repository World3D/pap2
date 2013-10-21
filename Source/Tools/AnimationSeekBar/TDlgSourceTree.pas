unit TDlgSourceTree;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, ComCtrls, AnimationSeekBarImpl1;

type
  TDlgSourceView = class(TForm)
    Button1: TButton;
    FileTree: TTreeView;
    Button_OK: TButton;
    procedure Button1Click(Sender: TObject);
    procedure FileTreeChange(Sender: TObject; Node: TTreeNode);
    procedure Button_OKClick(Sender: TObject);
  private
    { Private declarations }
  m_strStartDir : string;
  m_Suffix : TList;
  m_AnimationSeekBar : TAnimationSeekBar;
  procedure FindFileInSubDir(strDirName : string;
    Node : TTreeNode);
  function GetNodeFullPathName(Node : TTreeNode) : string;
  public
    { Public declarations }
  m_strSelectedFilePath : string;
  procedure OnInitDialog(AnimationSeekBar : TAnimationSeekBar;
    strDir : string;
    Suffix : TList);

  end;

var
  DlgSourceView: TDlgSourceView;

implementation

{$R *.dfm}
var
g_nDirectory : Integer = 0;
g_nFile : Integer = 1;

procedure TDlgSourceView.OnInitDialog(AnimationSeekBar : TAnimationSeekBar;
  strDir : string;
  Suffix : TList);
begin
  m_Suffix := TList.Create();
  m_Suffix := Suffix;
  m_strStartDir := strDir;
  m_AnimationSeekBar := AnimationSeekBar;
  Button1Click(nil);
end;


function TDlgSourceView.GetNodeFullPathName(Node : TTreeNode) : string;
var
strFullPath : string;
ParentNode : TTreeNode;
begin
  strFullPath := Node.Text;
  ParentNode := Node.Parent;
  while ParentNode <> nil do
  begin
    strFullPath := ParentNode.Text + '\' + strFullPath;
    ParentNode := ParentNode.Parent;
  end;
  GetNodeFullPathName := m_strStartDir + strFullPath;
end;

procedure TDlgSourceView.FindFileInSubDir(strDirName : string;
    Node : TTreeNode);
var
  SRecFile, SRecDir : TSearchRec;
  CurNode : TTreeNode;
  nFound : Integer;
  i : Integer;
begin
  //Find directories
  nFound := FindFirst(strDirName + '\*.*', faDirectory, SRecDir);
  while nFound = 0 do
  begin
    if (SRecDir.Attr = faDirectory) and
    (CompareText(SRecDir.Name, '.') <> 0) and
    (CompareText(SRecDir.Name, '..') <> 0) and
    (CompareText(SRecDir.Name, '.svn') <> 0) then
    begin
      CurNode := FileTree.Items.AddChild(Node, SRecDir.Name);
      CurNode.SelectedIndex := g_nDirectory;
      CurNode.ImageIndex := g_nDirectory;
      FindFileInSubDir(strDirName + '\' +  SRecDir.Name, CurNode);
    end;
    nFound := FindNext(SRecDir);
  end;
  //Find files
  for i := 0 to m_Suffix.Count - 1 do
  begin
    nFound := FindFirst(strDirName + '\*.' + string(m_Suffix[i]), faReadOnly and faArchive, SRecFile);
    while nFound = 0 do
    begin
      CurNode := FileTree.Items.AddChild(Node, SRecFile.Name);
      CurNode.SelectedIndex := g_nFile;
      CurNode.ImageIndex := g_nFile;
      nFound := FindNext(SRecFile);
    end;
  end;
end;

procedure TDlgSourceView.Button1Click(Sender: TObject);
begin
  FileTree.Items.Clear();
  FindFileInSubDir(m_strStartDir, nil);
end;

procedure TDlgSourceView.FileTreeChange(Sender: TObject; Node: TTreeNode);
begin
  if Node.SelectedIndex = g_nFile then
  begin
    if m_AnimationSeekBar.FEvents <> nil then
    begin
      m_strSelectedFilePath := WideString(GetNodeFullPathName(Node));
      m_AnimationSeekBar.FEvents.OnSoundFileSelection(m_strSelectedFilePath);

    end;
  end;
end;

procedure TDlgSourceView.Button_OKClick(Sender: TObject);
begin
  ModalResult := mrOK;
end;


end.
