//htis code works, this was made by ardu

#include <windows.h>
#include <stdio.h>

// LPARAM, WPARAM, 32 bit messages, they depend on what the message was
int CALLBACK WinProc(HWND hwnd, UINT msg, LPARAM lparam, WPARAM wparam) {
	switch (msg)
	{
	case WM_CLOSE:
		PostQuitMessage(0);
		break;
		printf("%d\n", wparam);
	default:
		return DefWindowProc(hwnd, msg, lparam, wparam);
	}

}

int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	//register window class
	const char* name = "class";

	WNDCLASSEX wc{ 0 };
	HWND hwnd;

	wc.cbSize = sizeof(wc);
	wc.style = CS_OWNDC;
	wc.lpfnWndProc = (WNDPROC)WinProc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hInstance = hInstance;
	wc.hIcon = nullptr;
	wc.hbrBackground = nullptr;
	wc.hCursor = nullptr;
	wc.lpszMenuName = nullptr;
	wc.lpszClassName = (LPCTSTR)name;
	wc.hIconSm = nullptr;

	RegisterClassEx(&wc);

	hwnd = CreateWindowExA(
		0,
		name,
		"window",
		WS_OVERLAPPEDWINDOW | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX,
		300,
		300,
		640,
		480,
		nullptr,
		nullptr,
		hInstance,
		nullptr
	);

	if (!hwnd) {
		printf("Error, hwnd is null. \n");
		return -1;
	}

	MSG msg = { 0 };

	ShowWindow(hwnd, SW_SHOW);

	//returns zero if WM_QUIT message is retrived
	BOOL gm_ret;

	while ((gm_ret = GetMessage(&msg, nullptr, 0, 0)) != 0)
	{
		if (gm_ret == -1) {
			printf("Error ocurred when message was recived\n");
			return -1;
		}


		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return gm_ret;
}