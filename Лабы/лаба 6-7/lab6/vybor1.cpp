#include <iostream>
#include "vybor1.h"
#include <windows.h>

using namespace std;

void perevod_lat_to_code()
{
	int choice; //���������� ��� ���-�� ������
	char symbol1, symbol2;
	cout << "������� ��� �� ������ ������� �������? "; 
	cin >> choice;

	for (int i = 0; i < choice; i++) {
		cout << "������� ����� ���������� �������� � �������� � ��������� ����: ";
		cin >> symbol1 >> symbol2;

		if ((symbol1 >= 'A' && symbol1 <= 'z') && (symbol2 >= 'A' && symbol2 <= 'z')) {
			printf("��� ��������� �����, ��� ASCII = %X, � ���������� ���� = %d", symbol1, symbol1);
			cout << "\n";
			printf("��� ��������� �����, ��� ASCII = %X, � ���������� ���� = %d", symbol2, symbol2);
			cout << "\n";
			cout << "������� ����� ����� �������� � ��������� �������� ����� " << abs((int)symbol1 - (int)symbol2) << endl;
		} else {
			cout << "������� ���������� �������!" << endl;
		}
	}	
}