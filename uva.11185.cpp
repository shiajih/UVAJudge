#include <bits/stdc++.h>
using namespace std;


int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	long long n;
	while (cin >> n) {	
		if (n < 0)
			return 0;
		else if (n == 0)
			cout << 0 << endl;
		else if (n == 1)
			cout << 1 << endl;
		else if (n == 2)
			cout << 2 << endl;
		else {
			vector<long long> output;
			while (n >= 3) {
				output.push_back(n % 3);
				n = n / 3;
				if (n == 1) {
					output.push_back(n);
					break;
				}
				else if (n == 2) {
					output.push_back(n);
					break;
				}
			}	
			
			vector<long long>::reverse_iterator it = output.rbegin();
			for (it; it != output.rend(); it++) {
				cout << *it;
			}
			cout << endl;
		}
	}
	
	return 0;
}
