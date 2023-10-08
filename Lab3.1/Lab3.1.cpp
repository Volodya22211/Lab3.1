#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double a;
	double y;
	double b;

	cout << "x = "; cin >> x;

	a = 1/x+4;


	if (x < 1)
		b = 0.65*x+8;
	if (x >= 1 && x < 5)
		b = atan(((x+6.1)/2)+exp(x));
	if (x >= 5)
		b = sqrt(1+ sqrt(x));

	y = a - b;

	cout << endl;
	cout << "1) y = " << y << endl;

	if (x < 1)
		b = 0.65 * x + 8;
	else
		if (x >= 1 && x < 5)
			b = atan(((x + 6.1) / 2) + exp(x));
		else
			b = sqrt(1 + sqrt(x));
	y = a - b;

	cout << "2) y = " << y << endl;

	cin.get();
	return 0;
}