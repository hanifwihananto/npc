#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	char i;
	cin >> n;
	string text;
	
	while (n--){
		cin >> text;
		set st;
		for(i : text){
			if(st.find(i) != st.end()){
				continue;
			}
			st.insert(i);
			cout << i;
		}
		
		cout << "\n";
	}
}

