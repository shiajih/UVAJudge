#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int h, m;
	while (scanf("%d:%d", &h, &m) != EOF) {
		double hangle, mangle, totalangle;
		if (h == 0 && m == 0)
			return 0;
		else {
			hangle = h * 30.0 + m / 60.0 * 30.0;
			mangle = m * 6.0;
			totalangle = abs(hangle - mangle);
			if (totalangle > 180.0)
				cout << fixed << setprecision(3) << 360.0 - totalangle << endl;
			else
				cout << fixed << setprecision(3) << totalangle << endl;
		}		
	}
	return 0;
}
