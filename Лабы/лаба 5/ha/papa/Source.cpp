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
	cout << "¬ыберите один из вариантов:\n1 Ц определение разницы значений кодов в ASCII буквы латинского алфавита в прописном и строчном написании; \n2 Ц определение разницы значений кодов в Windows-1251 буквы русского алфавита в прописном и строчном написании; \n3 Ц вывод в консоль кода символа, соответствующего введенной цифре; \n4 Ц выход из программы." << endl;
	cin >> n;
	while (n > 4 && n < 1) {
		cout << "¬ведите ваш символ: ";
		cin >> n;
	}
	switch (n) {
	case 1:
		cout << "¬ведите букву латинского алфавита в строчном и прописном виде: ";
		cin >> symbol1 >> symbol2;
		if ((symbol1 >= 'A' && symbol1 <= 'z') && (symbol2 >= 'A' && symbol2 <= 'z'))
		{
			printf("Ёто латинска€ буква, код ASCII = %X, в дес€тичном виде = %d", symbol1, symbol1);
			cout << "\n";
			printf("Ёто латинска€ буква, код ASCII = %X, в дес€тичном виде = %d", symbol2, symbol2);
			cout << "\n";
			cout << "–азница кодов между строчным и прописным символом равна " << abs((int)symbol1 - (int)symbol2) << endl;
		}
		else {
			cout << "–азница равна = " << abs(symbol1 - symbol2) << endl;
		}
		break;
	case 2:
		cout << "¬ведите букву русского алфавита в строчном и прописном виде: ";
		cin >> symb1 >> symb2;
		if ((symb1 >= 0xC0 && symb1 <= 0xFF) && (symb2 >= 0xC0 && symb2 <= 0xFF))
		{
			printf("Ёто русска€ буква, код Windows-1251 = %X, в дес€тичном виде = %d", symb1, symb1);
			cout << "\n";
			printf("Ёто русска€ буква, код Windows-1251 = %X, в дес€тичном виде = %d", symb2, symb2);
			cout << "\n";
			cout << "–азница кодов между строчным и прописным символом равна " << abs((int)symb1 - (int)symb2) << endl;
		}
		else {
			cout << "¬ведите корректный вариант!" << endl;
		}
		break;
	case 3:
		char num;
		cout << "¬ведите любую цифру от 1 до 9: ";
		cin >> num;
		if (num > '9' || num < '0') {
			cout << "¬ведите корректный вариант!" << endl;
		}
		else {
			printf("Ёто цифра %c, код ASCII(16-рична€ система) = %X", num, num);
		}
		break;
	case 4:
		break;
	default:
		cout << "¬ведите корректно (1-4)" << endl;
	}
}

