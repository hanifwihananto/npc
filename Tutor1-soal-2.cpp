#include <iostream>
using namespace std;

int main(){
	int n, a;
	long i;
	long ganjil = 0;
	long genap = 0;
	cin >> n;
	
	for(i = 1; i <= n; i++){
		cin >> a;
		if (a % 2 == 0){
			ganjil += a;
		} else {
			genap -= a;
		}
	}
	
	cout << ganjil + genap;
}
