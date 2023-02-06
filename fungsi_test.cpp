#include<iostream>
using namespace std;

int jumlah(int a, int b){
	cout << a << endl;
	cout << &a << endl;
	cout << b << endl;
	cout << &b << endl;
	return a + b;
}


int jumlah2(int &x, int &y){
	cout << x << endl;
	cout << &x << endl;
	cout << y << endl;
	cout << &y << endl;
	return x + y;
}

int main(){
	int hasil = jumlah(10, 5);
	cout << "Hasil 1 : " << hasil << endl;
	
	hasil = jumlah(10, 20);
	cout << "Hasil 2 : " << hasil << endl;
	
	
//	int x = 10;
//	int y = 30;
//	int hasil2 = jumlah2(x, y);
//	cout << "Hasil2 1 : " << hasil2 << endl;
	
//	x = 20;
//	y = 30;
//	hasil2 = jumlah2(x, y);
//	cout << "Hasil2 2 : " << hasil2 << endl;
}
