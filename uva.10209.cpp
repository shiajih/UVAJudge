#include <bits/stdc++.h>
using namespace std;

#define PI 2.0 * acos(0.0)
int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	double n;
	while (cin >> n) {
		double x, y, z;
		z = n * n - n * n * PI / 4;
		z -= n * n * PI / 4 - n * n * PI / 6 - ( n * n * PI / 6 - n * n * sqrt(3.0) / 4);
		y = n * n - n * n * PI / 4 - 2 * z;
		x = n * n - 4 * y - 4 * z;
		cout << fixed << setprecision(3) << x << " " << 4 * y << " " << 4 * z << endl;
	}
	
	return 0;
}
