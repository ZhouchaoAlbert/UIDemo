#include "UtilPath.h"
#include "UIlib.h"
#include "Singleton.h"
#include "MainFrame.h"
using namespace DuiLib;


int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE /*hPrevInstance*/, LPSTR /*lpCmdLine*/, int nCmdShow)
{
	// COM
	HRESULT Hr = ::CoInitialize(NULL);
	if (FAILED(Hr)) return 0;
	//������Դ����
	CPaintManagerUI::SetInstance(hInstance);
	CString s = Util::Path::GetResFolder();
	CPaintManagerUI::SetResourcePath(s);

	//��������
	CMainFrame* pMainFrame = new CMainFrame();
	if (pMainFrame == NULL)
		return 0;
	pMainFrame->Create(NULL, _T("Duilibѧϰ"), UI_WNDSTYLE_FRAME, 0L, 0, 0, 0, 0);
	pMainFrame->CenterWindow();

	//��Ϣѭ��
	CPaintManagerUI::MessageLoop();

	delete pMainFrame;
	pMainFrame = NULL;
	::CoUninitialize();
	return 0;
}
