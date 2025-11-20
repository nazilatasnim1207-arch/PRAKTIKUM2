#include<iostream>
using namespace std;
int main()
{
	double harga, diskonPersen, jumlahDiskon, hargaAkhir;

	cout << "=== progam menghitung diskon barang ===" << endl;

	cout << "masukkan harga barang (Rp):" << endl;
	cin >> harga;

	cout << "masukkan besar diskon (%):" << endl;
	cin >> diskonPersen;

	//hitung diskon
	jumlahDiskon = harga * (diskonPersen / 100);
	hargaAkhir = harga - jumlahDiskon;

	cout << "harga barang  : Rp " << harga << endl;
	cout << "diskon        : " << diskonPersen << "%" << endl;
	cout << "jumlah potongan : " << jumlahDiskon << endl;
	cout << "harga setelah diskon : Rp " << hargaAkhir << endl;

	return 0;
}
