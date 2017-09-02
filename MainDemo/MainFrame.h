#pragma once
#include "UIlib.h"

using namespace  DuiLib;

class CMainFrame : public WindowImplBase
{
public:
	CMainFrame();
	~CMainFrame();

public:// UI≥ı ºªØ
	CDuiString GetSkinFolder();
	CDuiString GetSkinFile();
	LPCTSTR GetWindowClassName() const;
	CControlUI* CreateControl(LPCTSTR pstrClass);
	void InitWindow();
	void OnFinalMessage(HWND hWnd);

};

