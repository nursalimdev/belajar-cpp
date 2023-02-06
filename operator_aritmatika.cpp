#include<iostream>
using namespace std;

int main(){
	/*
	+ penjumlahan
	- pengurangan
	/ pembagian
	* perkalian
	% sisa bagi (modulo)
	*/
	
	int bil1 = 50;
	int bil2 = 25;
	int hasil;
	
	hasil = bil1 + bil2;
	cout << bil1 << " + " << bil2 << " = " << hasil << endl;
	
	hasil = bil1 - bil2;
	cout << bil1 << " - " << bil2 << " = " << hasil << endl;
	
	hasil = bil1 * bil2;
	cout << bil1 << " * " << bil2 << " = " << hasil << endl;
	
	hasil = bil1 / bil2;
	cout << bil1 << " / " << bil2 << " = " << hasil << endl;
	
	hasil = bil1 % bil2;
	cout << bil1 << " % " << bil2 << " = " << hasil << endl;
}
