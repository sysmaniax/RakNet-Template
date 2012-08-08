// raknet_template.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "raknetdefines.h"
#include "RakString.h"

using namespace std;
using namespace RakNet;

int _tmain(int argc, _TCHAR* argv[])
{
	RakString *MyString = new RakString;
	MyString->Set("Hello World");
	std::cout << MyString->C_String() ;
	system("pause");
	return 0;
}

