#include <iostream>
using namespace std;

int main()
{
	// Введення
	double x; 
	double y; 
	double R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// Розгалуження 
	if (x * x + y * y <= R * R && x <= 0 && y >= 0 || x >= 0 && y <= 0 && y <= (-2 * R) / R && y >= -R && y >= 2 * x - 2 * R)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}