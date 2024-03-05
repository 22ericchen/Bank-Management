#include <iostream>
#include <Windows.h>

//screen dimensions
int nScreenWidth = 120;
int nScreenHeight = 40;

int main(){
    wchar_t *screen = new wchar_t[nScreenHeight*nScreenWidth];
    HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    SetConsoleActiveScreenBuffer(hConsole);
    DWORD dwBytesWritten = 0;

    return 0;
}   