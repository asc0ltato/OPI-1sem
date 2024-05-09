#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	int n;
	char symbol1, symbol2;
	char symb1, symb_2;
	start:
	cout << "Выберите один из вариантов:\n1 – определение разницы значений кодов в Windows-1251 буквы латинского алфавита в прописном и строчном написании; \n2 – определение разницы значений кодов в Windows-1251 буквы русского алфавита в прописном и строчном написании; \n3 – вывод в консоль кода символа, соответствующего введенной цифре; \n4 – выход из программы." << endl;
	cin >> n;
	while (n > 4 && n < 1) {
		cout << "Введите ваш символ: ";
		cin >> n;
	}
	switch (n) {
	case 1:
		cout << "Введите букву латинского алфавита в строчном или прописном виде: ";
		cin >> symbol1 >> symbol2;
		while (int(symbol1) < int('a') || int(symbol1) > int('z') || int(symbol2) < int('A') || int(symbol2) > ('Z') || abs(symbol1 - symbol2) != 32) {
			cout << "Введите букву латинского алфавита в строчном или прописном виде: ";
			cin >> symbol1 >> symbol2;
		}
		cout << "Разница равна = " << symbol1 - symbol2 << endl;
		break;
	case 2:
		cout << "Введите букву русского алфавита в строчном или прописном виде: ";
		cin >> symb1 >> symb_2;
		cout << "Разница равна = " << abs(symb1 - symb_2) << endl;
		break;
	case 3:
		char sym;
		cout << "Введите любую цифру от 1 до 9: "; cin >> sym;
		while (sym > '9' || sym < '0') {
			cout << "\nВведите число: " << endl;
			cin >> sym;
		}
		cout << int(sym);
		break;
	case 4:
		break;
	default:
		goto start;
	}
}
