#include <iostream>
#include "vybor2.h"
#include <windows.h>

using namespace std;

void perevod_rus_to_code()
{
	int choice; //переменная под кол-во вводов
	unsigned char symbol1, symbol2;
	cout << "Сколько раз вы хотите вводить символы? "; 
	cin >> choice;

	for (int i = 0; i < choice; i++) {	
		cout << "Введите букву русского алфавита в строчном и прописном виде: ";
		cin >> symbol1 >> symbol2;

		if ((symbol1 >= 0xC0 && symbol1 <= 0xFF) && (symbol2 >= 0xC0 && symbol2 <= 0xFF)) {
			cout << "Введите корректный вариант!" << endl;
		} else {
			printf("Это русская буква, код Windows-1251 = %X, в десятичном виде = %d", symbol1, symbol1);
			cout << "\n";
			printf("Это русская буква, код Windows-1251 = %X, в десятичном виде = %d", symbol2, symbol2);
			cout << "\n";
			cout << "Разница кодов между строчным и прописным символом равна " << abs((int)symbol1 - (int)symbol2) << endl;
		}
	}
}