#include <iostream>
using namespace std;

int main() {

	char satu_3 = 'I';
	char lima = 'V';
	char sepuluh = 'X';
	char seratus = 'C';
	char limapuluh = 'L';
	char limaratus = 'D';
	char seribu = 'M';
	int hasil1, hasil2, hasil3, hasil4, hasil5;
	int input;
	cout << "\nPROGRAM KONVERSI BILANGAN BULAT POSITIF KEDALAM ANGKA ROMAWI" << endl;
	cout << "=============================================================" << endl;
	cout << "masukan angka : ";
	cin >> input;
	cout << "hasilnya adalah : " << endl;

	int hasilsum, hasilsum2, hasilsum3;
	int hasilnew;

	hasil1 = input / 1000; 
	hasil2 = input % 1000; 
	hasilnew = hasil2 / 100;
	hasil3 = (hasil2 % 100);
	hasil4 = hasil3 / 10;
	hasil5 = hasil3 % 10;
	
	
	
	int i = 0;
	while (i < hasil1) {							// konversi ribuan
		cout << seribu;
		i++;
	}
	
	if ((hasilnew >= 5) && (hasilnew < 9)) {		// konversi ratusan
		cout << limaratus;
		hasilsum = hasilnew % 5;
		int j = 0;
		while (j < hasilsum) {
			cout << seratus;
			j++;
		}
	}
	else if (hasilnew == 9) {
		cout <<  seribu << seratus;
	}
	else if (hasilnew == 4) {
		cout << seratus << limaratus;
	}
	else if ((hasilnew >= 1) && (hasilnew <= 3)) {
		hasilsum2 = hasilnew;
		int m = 0;
		while (m < hasilsum2) {
		cout << seratus;
		m++;
		}
	}

	
	if ((hasil4 >= 5 )&&(hasil4 < 9 )){				//konversi puluhan
		cout << limapuluh;
		hasilsum3 = hasil4 % 5;
		int k = 0;
		while (k < hasilsum3) {
			cout << sepuluh;
			k++;
		}
	}else if (hasil4 == 9) {
		cout << sepuluh << seratus;
	}
	else if (hasil4 == 4) {
		cout << sepuluh << limapuluh;
	}
	else if ((hasil4 >= 1) && (hasil4 <= 3)) {
		int n = 0;
		while (n < hasil4) {
			cout << sepuluh;
			n++;
		}
	}


	if ((hasil5 >= 1) && (hasil5 <= 3)) {			//KONVERSI SATUAN
		int l = 0;
		while (l < hasil5)
		{
			cout << satu_3;
			l++;
		}
	}
	else if (hasil5 == 5) {
		cout << lima;
	}
	else if (hasil5 == 4) {
		cout << satu_3 << lima;
	}
	else if (hasil5 == 9) {
		cout << satu_3 << sepuluh;
	}
	


	cout << endl;
	cout << "=============================================================" << endl;
	cout << endl << endl;

	return 0;
}
