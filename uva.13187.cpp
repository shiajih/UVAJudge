#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++) {
		long long in;
		cin >> in;
		cout << ((in + 1) * (in + 1) - 1) << endl;
	}
	return 0;
}