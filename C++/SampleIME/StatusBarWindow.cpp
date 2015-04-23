#include "StatusBarWindow.h"

CStatusBarWindow::CStatusBarWindow(STATUSBAR_CALLBACK callback) {
	_mStatusBarCallback = callback;
}

CStatusBarWindow::~CStatusBarWindow() {
	_mStatusBarCallback = nullptr;
}
