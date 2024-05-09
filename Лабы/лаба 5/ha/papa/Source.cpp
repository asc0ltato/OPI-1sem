#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "ru");
	int n;
	char symbol1, symbol2;
	unsigned char symb1, symb2;
	cout << "�������� ���� �� ���������:\n1 � ����������� ������� �������� ����� � ASCII ����� ���������� �������� � ��������� � �������� ���������; \n2 � ����������� ������� �������� ����� � Windows-1251 ����� �������� �������� � ��������� � �������� ���������; \n3 � ����� � ������� ���� �������, ���������������� ��������� �����; \n4 � ����� �� ���������." << endl;
	cin >> n;
	while (n > 4 && n < 1) {
		cout << "������� ��� ������: ";
		cin >> n;
	}
	switch (n) {
	case 1:
		cout << "������� ����� ���������� �������� � �������� � ��������� ����: ";
		cin >> symbol1 >> symbol2;
		if ((symbol1 >= 'A' && symbol1 <= 'z') && (symbol2 >= 'A' && symbol2 <= 'z'))
		{
			printf("��� ��������� �����, ��� ASCII = %X, � ���������� ���� = %d", symbol1, symbol1);
			cout << "\n";
			printf("��� ��������� �����, ��� ASCII = %X, � ���������� ���� = %d", symbol2, symbol2);
			cout << "\n";
			cout << "������� ����� ����� �������� � ��������� �������� ����� " << abs((int)symbol1 - (int)symbol2) << endl;
		}
		else {
			cout << "������� ����� = " << abs(symbol1 - symbol2) << endl;
		}
		break;
	case 2:
		cout << "������� ����� �������� �������� � �������� � ��������� ����: ";
		cin >> symb1 >> symb2;
		if ((symb1 >= 0xC0 && symb1 <= 0xFF) && (symb2 >= 0xC0 && symb2 <= 0xFF))
		{
			printf("��� ������� �����, ��� Windows-1251 = %X, � ���������� ���� = %d", symb1, symb1);
			cout << "\n";
			printf("��� ������� �����, ��� Windows-1251 = %X, � ���������� ���� = %d", symb2, symb2);
			cout << "\n";
			cout << "������� ����� ����� �������� � ��������� �������� ����� " << abs((int)symb1 - (int)symb2) << endl;
		}
		else {
			cout << "������� ���������� �������!" << endl;
		}
		break;
	case 3:
		char num;
		cout << "������� ����� ����� �� 1 �� 9: ";
		cin >> num;
		if (num > '9' || num < '0') {
			cout << "������� ���������� �������!" << endl;
		}
		else {
			printf("��� ����� %c, ��� ASCII(16-������ �������) = %X", num, num);
		}
		break;
	case 4:
		break;
	default:
		cout << "������� ��������� (1-4)" << endl;
	}
}

