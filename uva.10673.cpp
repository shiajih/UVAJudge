#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n;
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			long long x, k, p, q, temp;
			bool equal = false;			
			cin >> x >> k;
			long long floor1 = floor((double)x / (double)k);
			long long  ceil1 = ceil((double)x / (double)k);
			for (p = 0; !equal; p++) {
				for (q = 0; !equal; q++) {
					temp = p * floor1 + q * ceil1;
					if (temp == x)
						equal = 1;
					else if (temp > x)
						break;
				}
			}
			cout << --p << " " << --q << endl;
		}
	}
	return 0;
}