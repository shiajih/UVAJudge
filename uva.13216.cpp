#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++) {
		char in[10000] = { '\0' };
		cin.clear();
		cin.ignore();
		scanf("%s", in);
		int s_length = strlen(in);
		if (strlen(in) == 1 && in[0] == '0')
			cout << 1 << endl;
		else if (strlen(in) == 1 && in[0] == '1')
			cout << 66 << endl;
		else {
			int k = in[s_length -1] - '0';
			k %= 5;
			switch (k) {
				case 0:
					cout << 76 << endl;
					break;
				case 1:
					cout << 16 << endl;
					break;
				case 2:
					cout << 56 << endl;
					break;
				case 3:
					cout << 96 << endl;
					break;
				case 4:
					cout << 36 << endl;
					break;
			}
		}
		
	}
	return 0;
}