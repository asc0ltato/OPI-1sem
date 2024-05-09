#include <iostream>
#include "vybor2.h"
#include <windows.h>

using namespace std;

void perevod_rus_to_code()
{
	int choice; //���������� ��� ���-�� ������
	unsigned char symbol1, symbol2;
	cout << "������� ��� �� ������ ������� �������? "; 
	cin >> choice;

	for (int i = 0; i < choice; i++) {	
		cout << "������� ����� �������� �������� � �������� � ��������� ����: ";
		cin >> symbol1 >> symbol2;

		if ((symbol1 >= 0xC0 && symbol1 <= 0xFF) && (symbol2 >= 0xC0 && symbol2 <= 0xFF)) {
			cout << "������� ���������� �������!" << endl;
		} else {
			printf("��� ������� �����, ��� Windows-1251 = %X, � ���������� ���� = %d", symbol1, symbol1);
			cout << "\n";
			printf("��� ������� �����, ��� Windows-1251 = %X, � ���������� ���� = %d", symbol2, symbol2);
			cout << "\n";
			cout << "������� ����� ����� �������� � ��������� �������� ����� " << abs((int)symbol1 - (int)symbol2) << endl;
		}
	}
}