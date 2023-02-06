#include<iostream>
using namespace std;

int main(){
	int angka = 100;
	int* p_angka = &angka;
	
	cout << "Nilai variable angka : " << angka << endl;
	cout << "Alamat variable angka : " << &angka << endl;
	cout << "Nilai variable pointer 1 : " << p_angka << endl;
	cout << "Isi pointer : " << *p_angka << endl;
	
	// ubah nilai pointer angka
	*p_angka = 90;
	cout << "Nilai variable angka : " << angka << endl;
	cout << "Alamat variable angka : " << &angka << endl;

	cout << "====================" << endl;
	
	angka = 200;

	cout << "Nilai variable angka : " << angka << endl;
	cout << "Alamat variable angka : " << &angka << endl;
	cout << "Nilai variable pointer : " << p_angka << endl;
	cout << "Isi pointer : " << *p_angka << endl;
	
	
	
	
}
