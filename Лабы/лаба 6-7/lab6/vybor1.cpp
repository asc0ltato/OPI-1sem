#include <iostream>
#include "vybor1.h"
#include <windows.h>

using namespace std;

void perevod_lat_to_code()
{
	int choice; //переменная под кол-во вводов
	char symbol1, symbol2;
	cout << "Сколько раз вы хотите вводить символы? "; 
	cin >> choice;

	for (int i = 0; i < choice; i++) {
		cout << "Введите букву латинского алфавита в строчном и прописном виде: ";
		cin >> symbol1 >> symbol2;

		if ((symbol1 >= 'A' && symbol1 <= 'z') && (symbol2 >= 'A' && symbol2 <= 'z')) {
			printf("Это латинская буква, код ASCII = %X, в десятичном виде = %d", symbol1, symbol1);
			cout << "\n";
			printf("Это латинская буква, код ASCII = %X, в десятичном виде = %d", symbol2, symbol2);
			cout << "\n";
			cout << "Разница кодов между строчным и прописным символом равна " << abs((int)symbol1 - (int)symbol2) << endl;
		} else {
			cout << "Введите корректный вариант!" << endl;
		}
	}	
}