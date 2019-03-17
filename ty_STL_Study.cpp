// ty_STL_Study.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "string_demo.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char  a[10];
	char* sz = new char[10];
	cout << "a[10] size: " << sizeof(a) << endl;
	cout << "sz new char[10] size: " << sizeof(sz) << endl;

	string_demo::initialize();
	string_demo::ToCString();
	string_demo::strUpdate();
	string_demo::strSubString();
	string_demo::strCompare();
	string_demo::strSearch();
	return 0;
}

