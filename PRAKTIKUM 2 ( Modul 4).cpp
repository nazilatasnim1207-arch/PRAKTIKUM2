#include<iostream>
using namespace std;
int main()
{
	double nilai;
	char hasil;
	
	cout << "=== progam penentuan nilai mahasiswa ===" << endl;
	cout << "masukkan nilai mahasiswa (0 - 100) : " << endl;
	cin >> nilai;

	// menentukan hasil
	if (nilai > 90 && nilai < 100){
		
		cout << "hasil : A (NAIK KELAS)" << endl;
	}
	else if (nilai > 80) {
		
		cout << "hasil : B  (NAIK KELAS)" << endl;
	}
	else if (nilai > 70) {
		
		cout << "hasil : C (NAIK KELAS)" << endl;
	}
	else if (nilai > 60) {
		
		cout << "hasil : D (TIDAK LULUS)" << endl;
	}
	else {
		cout << "hasil : E (TIDAK LULUS)" << endl;
	}

}