#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double y;
	double A; 
	double B;

	cout << "x = "; cin >> x;

	A = x * x;

	// спосіб 1: розгалуження в скороченій формі
	if (x < 4)
		B = 4 * pow(x, 7) - pow(x, 5) + pow(x, 3) - 2;
	if (x >= 4 && x < 7)
		B = atan(x) * ((fabs(x) + 1) / 2) + 8.3 * x;
	if (x >= 7)
		B = log(fabs(2 * x + exp(4 * x + 1)));
	y = A + B;
	cout << "1) y = " << y;


	//// спосіб 2: розгалуження в повній формі

	if(x < 4)
		B = 4 * pow(x, 7) - pow(x, 5) + pow(x, 3) - 2;
	else 
		if(x < 7)
		B = atan(x) * ((fabs(x) + 1) / 2) + 8.3 * x;
		else 
		B = log(fabs(2 * x + exp(4 * x + 1)));
	
	y = A + B;

	cout << endl << "2) y = " << y;

	cin.get();
	return 0;
}


