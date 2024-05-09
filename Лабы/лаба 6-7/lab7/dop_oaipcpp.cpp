#include <iostream>

using namespace std;

void main()
{
	int a = 1, b = 4;
	double s = 0, h, x;
	const double n = 200;
	h = (b - a) / n;
	x = a;

	for (x; x < (b - h); x = x + h) {
		s = s + h * ((pow(x, 4) + 1) + (pow((x + h), 4) + 1)) / 2;
	}

	cout << "s = " << s << endl;
}