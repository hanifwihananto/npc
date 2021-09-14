#include <iostream>
using namespace std;

int main(){
	// a : awalan 
	// b : kelipatan
	// c : jumlah baris
	
	int a, b, c;
	int i, j;
	cin >> a >> b;
	cin >> c;
	
	// baris
	for(i = 0; i < c; i++){
		for(j = 0; j < a; j++){
			cout << "^";
		}
		a += b;
		cout << endl;
	}
}

