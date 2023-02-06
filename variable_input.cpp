#include<iostream>
using namespace std;

int main(){
	
	string aktifitas;
	string tempat;
	int umur;
	
	cout << "Apa aktifitas Anda \t\t: ";
	getline(cin, aktifitas);
//	cin >> aktifitas;

	cout << "Tempat Anda beraktifitas \t: ";
//	cin >> tempat;
	getline(cin, tempat);
	
	cout << "Umur Anda Berapa? \t: ";
	cin >> umur;
	
	cout << "Saya sedang " << aktifitas << " di " << tempat << endl;
	cout << "Saya berumur " << umur << " tahun";
}
