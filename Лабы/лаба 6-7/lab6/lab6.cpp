#include <iostream>
#include "vybor1.h"
#include "vybor2.h"
#include "vybor3.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int n;	
	cout << "�������� ���� �� ���������:\n1 � ����������� ������� �������� ����� � ASCII ����� ���������� �������� � ��������� � �������� ���������; \n2 � ����������� ������� �������� ����� � Windows-1251 ����� �������� �������� � ��������� � �������� ���������; \n3 � ����� � ������� ���� �������, ���������������� ��������� �����; \n4 � ����� �� ���������." << endl;
	cin >> n;
	switch (n) {
	case 1:
		perevod_lat_to_code();
		break;
	case 2:
		perevod_rus_to_code();
		break;
	case 3:
		number_to_code();
		break;
	case 4:
		break;
	default:
		break;
	}
	
}