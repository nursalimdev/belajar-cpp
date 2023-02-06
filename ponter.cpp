#include<iostream>
using namespace std;

void add_score(int score){
	score = score + 5;
	cout << "Nilai score di dalam fungsi : " << score << endl;
}


void add_score_pointer(int *score){
	*score = *score + 5;
	cout << "Nilai score di dalam fungsi : " << *score << endl;
}

int main(){
	int score = 0;
	cout << "Nilai score awal : " << score << endl;
//	add_score(score);
//	add_score(score);
//	add_score(score);
//	add_score(score);
//	add_score(score);
	
	
	add_score_pointer(&score);
	add_score_pointer(&score);
	add_score_pointer(&score);
	add_score_pointer(&score);
	add_score_pointer(&score);
	
	cout << "Hasil score akhir : " << score;
	
}
