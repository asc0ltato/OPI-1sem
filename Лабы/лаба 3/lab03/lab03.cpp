﻿#include <iostream>
using namespace std;
//ZhukSvetlana2004
//Windows-1521: 005A 0068 0075 006B 0053 0076 0065 0074 006C 0061 006E 0061 0032 0030 0030 0034
// UTF-8  005A 0068 0075 006B 0053 0076 0065 0074 006C 0061 006E 0061 0032 0030 0030 0034
//UTF-16 : 5a 68 75 6b 53 76 65 74 6c 61 6e 61 20 61 32 30 30 34

//ЖукСветлана2004 
//Windows-1521: 0416 0443 043A 0421 0432 0435 0442 043B 0430 043D 0430 0032 0030 0030 0034
// UTF-8 :      0416 0443 043A 0421 0432 0435 0442 043B 0430 043D 0430 0032 0030 0030 0034
//UTF-16 :      416 443 43a 421 432 435 442 43b 430 43d 430 32 30 30 34 

//Жук2004Svetlana 
//Windows-1521: 0416 0443 043A 0032 0030 0030 0034 0053 0076 0065 0074 006C 0061 006E 0061
// UTF-8 :      0416 0443 043A 0032 0030 0030 0034 0053 0076 0065 0074 006C 0061 006E 0061
//UTF-16 :      416 443 43a 32 30 30 34 53 76 65 74 6c 61 6e 61 20

int main()
{
	int number = 0x12345678;
	char hello[] = "Hello, ";
	char lfie[] = "ZhukSvetlana2004";
	char rfie[] = "ЖукСветлана2004";
	char lr[] = "Жук2004Svetlana";

	wchar_t Lfie[] = L"ZhukSvetlana2004";
	wchar_t Rfie[] = L"ЖукСветлана2004";
	wchar_t LR[] = L"Жук2004Svetlana";

	cout << hello << lfie << endl;
	return 0;
}