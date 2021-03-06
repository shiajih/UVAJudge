#include <bits/stdc++.h>
using namespace std;

bool check(long long _a, long long _b, long long _c) {
	if ((_a + _b > _c) && (_a + _c > _b) && (_b + _c > _a))
		return 1;
	else
		return 0;
}

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	long long n, id = 1;
	while (cin >> n) {
		for (long long i = 0; i < n; i++) {
			long long a, b, c;
			cin >> a >> b >> c;
			if (a <= 0 || b <= 0 || c <= 0) {
				cout << "Case " << id << ": Invalid" << endl;
				id++;
			}
			else if (a == b && b == c) {
				cout << "Case " << id << ": Equilateral" << endl;
				id++;
			}
			else if ((a == b || a == c || b == c) && a != 0 && b != 0 && c != 0 && check(a, b, c)) {
				cout << "Case " << id << ": Isosceles" << endl;
				id++;
			}
			else if (check(a, b, c)) {
				cout << "Case " << id << ": Scalene" << endl;
				id++;
			}
			else {
				cout << "Case " << id << ": Invalid" << endl;
				id++;
			}
		}
	}	
	return 0;
}