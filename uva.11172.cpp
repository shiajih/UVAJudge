#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n;
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			int a, b;
			cin >> a >> b;
			if (a > b)
				cout << '>' << endl;
			else if (a < b)
				cout << '<' << endl;
			else
				cout << '=' << endl;
		}
	}
	
	return 0;
}
