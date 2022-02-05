#include <iostream>
using namespace std;

int main() {
	float a, b, c, d, X1, X2;

	cout << "MENCARI AKAR-AKAR DARI PERSAMAAN KUADRAT" << endl;
	cout << "Bentuk umum dari persamaan kuadrat : ax^2 + bx + c = 0" << endl << endl;

	cout << "Masukan nilai a = ";
	cin >> a;
	cout << "Masukan nilai b = ";
	cin >> b;
	cout << "Masukan nilai c = ";
	cin >> c;

	d = b * b - 4 * a * c;
	X1 = (-b + sqrt(d)) / 2 * a;
	X2 = (-b - sqrt(d)) / 2 * a;
	if (d > 0) {
		
		cout << "X1 = " << X1 << endl;
		cout << "X2 = " << X2 << endl;
	}
	else if (d == 0) {
	
		cout <<"X1,X2 bernilai sama yaitu : " << X1 << endl;
	}
	else {
		cout << "Akar-Akar imaginer" << endl;

	}

	return 0;
}
