#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n;
	while (cin >> n) {
		int count = 1;
		double c, d;
		for(int i = 0; i < n; i++) {
			cin >> c >> d;		
			double tempF = (9 * c) / 5 + 32;
			tempF += d;
			cout << "Case " << count << ": " << fixed << setprecision(2) << ((tempF - 32) * 5) / 9 << endl;
			count++;
		}
	}
	return 0;
}
