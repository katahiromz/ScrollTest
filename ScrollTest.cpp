#include <windows.h>
#include <windowsx.h>

void OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify)
{
    SCROLLINFO si = { sizeof(si) };
    switch (id)
    {
    case IDOK:
    case IDCANCEL:
        EndDialog(hwnd, id);
        break;
    case psh1:
        ShowScrollBar(hwnd, SB_HORZ, FALSE);
        si.fMask = SIF_POS;
        si.nPos = 0;
        SetScrollInfo(hwnd, SB_HORZ, &si, TRUE);
        break;
    }
}

INT_PTR CALLBACK
DialogProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch (uMsg)
    {
        HANDLE_MSG(hwnd, WM_COMMAND, OnCommand);
    }
    return 0;
}

INT WINAPI
WinMain(HINSTANCE   hInstance,
        HINSTANCE   hPrevInstance,
        LPSTR       lpCmdLine,
        INT         nCmdShow)
{
    DialogBox(hInstance, MAKEINTRESOURCE(1), NULL, DialogProc);
    return 0;
}
