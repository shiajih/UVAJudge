#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n;
	while (cin >> n) {
		if (n == 0)
			return 0;
		else {
			long long total = 0;
			for (int i = 1; i <= n; i++) {
				total += i * i;
			}
			cout << total << endl;
		}
	}
	return 0;
}