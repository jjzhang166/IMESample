// Editor: Lee Haw

#pragma once

#include "private.h"
#include "BaseWindow.h"

enum STATUSBAR_ACTION {
	STATUSBAR_ITEM_SELECT
};

typedef HRESULT (*STATUSBAR_CALLBACK)(enum STATUSBAR_ACTION);

class CStatusBarWindow : public CBaseWindow {
public:
	CStatusBarWindow(STATUSBAR_CALLBACK callback);
	virtual ~CStatusBarWindow();

	// inherit
    //virtual BOOL _Create(ATOM atom, DWORD dwExStyle, DWORD dwStyle, _In_opt_ CBaseWindow *pParentWnd = nullptr, int wndWidth = 0, int wndHeight = 0, _In_opt_ HWND parentWndHandle = nullptr);
    //virtual void _Destroy();

    //virtual void _Move(int x, int y);
    //virtual void _Resize(int x, int y, int cx, int cy);
    //virtual void _Show(BOOL isShowWnd);
    //virtual BOOL _IsWindowVisible();
    //virtual void _Enable(BOOL enableWindowReceiveInput);
    //virtual BOOL _IsEnabled();
    //virtual void _InvalidateRect();
    //virtual BOOL _GetWindowRect(_Inout_ LPRECT lpRect);
    //virtual BOOL _GetClientRect(_Inout_ LPRECT lpRect);

    //virtual LRESULT CALLBACK _WindowProcCallback(_In_ HWND wndHandle, UINT uMsg, _In_ WPARAM wParam, _In_ LPARAM lParam) = 0;
    //virtual void _OnPaint(_In_ HDC dcHandle, _In_ PAINTSTRUCT *pps) { dcHandle; pps; }
    //virtual void _OnLButtonDown(POINT pt) { pt; }
    //virtual void _OnLButtonUp(POINT pt) { pt; }
    //virtual void _OnMouseMove(POINT pt) { pt; }
    //virtual void _OnTimer() { }

protected:

private:
	STATUSBAR_CALLBACK _mStatusBarCallback; // funciton pointer, for callback function

};