#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	long long n;
	while (cin >> n) {
		long long result;
		if (n < 0)
			return 0;
		else if (n == 1) {
			cout << "0%" << endl;
		}
		else {
			result = n * 25;
			cout << fixed << result << "%" << endl;
		}
	}	
	return 0;
}