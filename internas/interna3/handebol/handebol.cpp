#include <iostream>
#include <algorithm>
	
#define pb push_back
#define eb emplace_back
#define all(v) v.begin(), v.end()

using namespace std;

int main() {
	int m, n;
	
	while(cin >> m >> n) {
		int counter = 0;
		
		while(m--) {
			vector<int> v;
			
			for(int i = 0; i < n; i++) {
				int x;
				cin >> x;
				v.pb(x);
			}
			
			if(all_of(all(v), [](int i) { return i > 0; })) 
				counter++;
		}
		
		cout << counter <<  endl;
	}

	return 0;
}
