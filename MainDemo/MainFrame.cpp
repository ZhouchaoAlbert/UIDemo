#include "MainFrame.h"
#include "Control/UIGroupBox.h"

CMainFrame::CMainFrame()
{
}


CMainFrame::~CMainFrame()
{
}


CDuiString CMainFrame::GetSkinFolder()
{
	return _T("Resource");
}

CDuiString CMainFrame::GetSkinFile()
{
	return _T("xml\\MainFrame.xml");
}

LPCTSTR CMainFrame::GetWindowClassName(void) const
{
	return _T("MainFrameClass");
}

CControlUI* CMainFrame::CreateControl(LPCTSTR pstrClass)
{
	if (_tcscmp(pstrClass, _T("GroupBox")) == 0)
	{
		return new CGroupBoxUI();
	}
	return NULL;
}

void CMainFrame::InitWindow()
{

}

void CMainFrame::OnFinalMessage(HWND hWnd)
{

}