#include<iostream>
using namespace std;

int main(){
	cout << "##### Program Antrian CS ######" <<endl;
	char no_antrian[5] = {'A', 'B', 'C', 'D', 'E'};
	
	// menggunakan pointer
	char *p_current = &no_antrian;
	
	for(int i = 0; i < 5; i++){
		cout << "Pelanggan dengan nomor antrian %c silakan ke loket!!" <<*p_current <<endl;
	}
	 
}
