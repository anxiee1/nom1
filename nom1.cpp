#include <iostream>
#include <cmath>
using namespace std;
#define RETURN return 0

int main() {
	setlocale(LC_ALL, "RU");

	double x,y;
	cout << "Введите x: ";
	cin >> x;
	if (cin.fail()) 
	{
		cout << "Введите число ! \n" << endl;
		cin.clear();
		while (cin.get() != '\n')
			return 1;
	}
	
	cout << "Введите y: ";
	cin >> y;
	if (cin.fail())
	{
		cout << "Введите число ! \n" << endl;
		cin.clear();
		while (cin.get() != '\n')
			return 1;
	}
	float z;
	z = 2 * x * y - sin(x + 3 * y * y);
	cout << "z = " << z << endl;

	RETURN;
}