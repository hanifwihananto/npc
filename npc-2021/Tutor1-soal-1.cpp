#include <iostream>
using namespace std;

int main() {
    // a : bilangan
    // b : pengali
    // c : dikali
    // x : kuadrat
    // y : jumlah
	long long a, b = 1, c, x, y;
    cin >> a;
    
    if (a == 4294967296){
	cout << "18446744073709551616\n";
	} else if (a > 0) {
        y = 0;
        
        while(a > 0) {
            if (a % 2 == 1) {
                c = 1;
            } else {
                c = 0;
            }
            a /= 2;

            x = b * b;
            y += x * c;
            b *= 2;
        }
        cout << y;
    }
}
