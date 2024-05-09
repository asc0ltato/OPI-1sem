#include <iostream>
#include "vybor3.h"
#include <windows.h>

using namespace std;

void number_to_code()
{
	int choice; //переменная под кол-во вводов
	char num;
	cout << "Сколько раз вы хотите вводить цифры? ";
	cin >> choice;

	for (int i = 0; i < choice; i++) {
		cout << "Введите любую цифру от 1 до 9: ";
		cin >> num;

		if (num <= '9' || num >= '0') {
			printf("Это цифра %c, код ASCII(16-ричная система) = %X", num, num);
			cout << "\n";
		} else {
			cout << "Введите корректный вариант!" << endl;
		}
	}
}