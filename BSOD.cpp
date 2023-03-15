#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#include <iostream>

using namespace std;

int main(int argc, _TCHAR* argv[])
{
	HANDLE hFile = NULL;

	hFile = CreateFileW(L"C:\\$MFT\\dirtyfile", FILE_READ_ATTRIBUTES, 0, NULL, OPEN_EXISTING, 0, NULL);

	CloseHandle(hFile);

	return 0;

	cout << "BY MVA";

	Sleep(2000);
}