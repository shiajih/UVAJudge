#include <iostream>
#include <vector>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n;
	while (cin >> n) {
		int a, b, c;
		for (int i = 0; i < n; i++) {
			cin >> a >> b >> c;
			if (a + b > c && a + c > b && b + c > a) {
				cout << "OK" << endl;
			}
			else
				cout << "Wrong!!" << endl;
		}
	}
	return 0;
}
