// DllTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <iostream>
using namespace std;
typedef int (__cdecl *DllFun)(void);
int _tmain(int argc, _TCHAR* argv[])
{

	HINSTANCE hDll;
	hDll=LoadLibrary(_T("DllMain.dll"));

	DllFun dll_clFun;
	dll_clFun=(DllFun)GetProcAddress(hDll,"fnDllMain");
	int d=dll_clFun();
	cout<<"the result:"<<d;
	return 0;
}

