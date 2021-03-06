#include <bits/stdc++.h>
using namespace std;

long long Fib(long long a){
	if (a == 1)
		return 1;
	else if (a == 2)
		return 2;
	else {
		vector<long long> table(a + 1);
		table[1] = 1;
		table[2] = 2;
		for (long long i = 3; i <= a; i++) {
			table[i] = table[i - 1] + table[i - 2];
		}
		return table.back();
	}
}

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	long long n;
	while (cin >> n) {
		if (n == 0)
			return 0;
		else {
			cout << Fib(n) << endl;
		}
	}
	return 0;
}