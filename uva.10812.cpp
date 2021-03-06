#include <bits/stdc++.h>
using namespace std;

double a, b;
bool solve(double _sum, double _abs) {
	a = (_sum + _abs) / 2;
	b = _sum - a;
	if (a < 0 || b < 0 || a != ceil(a) || b != ceil(b))
		return 0;
	else
		return 1;
}

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n;
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			double sum, abs;
			cin >> sum >> abs;
			bool result = solve(sum, abs);
			if (result) {
				if (a > b) {
					cout << a << ' ' << b << endl;
				}
				else
					cout << b << ' ' << a << endl;
			}
			else
				cout << "impossible" << endl;
		}
	}
	return 0;
}
