#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n;
	while (cin >> n) {
		while (n--) {
			char *in = new char;
			char *num = new char;
			scanf(" %[^-]%s", in, num);
			//cout << in[0] << in[1] << in[2] << num[0] << num[1] << num[2] << num[3] << num[4];
			int ct = 0, nt = 0;
			ct = ((in[0] - 'A') * 26 * 26) + ((in[1] - 'A') * 26) + ((in[2] - 'A'));
			//cout << ct;
			nt = ((num[1] - '0') * 1000) + ((num[2] - '0') * 100) + ((num[3] - '0') * 10) + (num[4] - '0');
			//cout << nt;
			if (abs(ct - nt) <= 100)
				cout << "nice" << endl;
			else
				cout << "not nice" << endl;
		}
	}
	return 0;
}