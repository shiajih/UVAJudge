#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n = 0, col = 0;
	bool same;
	while (cin >> n) {		
		for (int i = 0; i < n; i++) {
			if (i)
				cout << endl;
			cin >> col;
			same = true;
			int diff, yfir, ysec;
			cin >> yfir >> ysec;
			diff = yfir - ysec;
			for (int j = 1; j < col; j++) {
				cin >> yfir >> ysec;
				if (yfir - ysec != diff)
					same = false;
			}
			if (same)
				cout << "yes" << endl;
			else
				cout << "no" << endl;
		}
	}
	return 0;
}