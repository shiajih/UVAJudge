#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	string in;
	while (cin >> in) {		
		if (in == "0")
			return 0;
		else {
			int odd_sum = 0, even_sum = 0;
			if (in.size() % 2 == 0) {	//偶數個數字
				for (int i = in.size() - 1; i > 0; i -= 2) {
					odd_sum += (in[i] - '0');
				}

				for (int i = in.size() - 2; i >= 0; i -= 2) {
					even_sum += (in[i] - '0');
				}

				if ((odd_sum - even_sum) % 11 == 0)
					cout << in << " is a multiple of 11." << endl;
				else
					cout << in << " is not a multiple of 11." << endl;
			}
			else {		//奇數個數字
				for (int i = in.size() - 1; i >= 0; i -= 2) {
					odd_sum += (in[i] - '0');
				}

				for (int i = in.size() - 2; i > 0; i -= 2) {
					even_sum += (in[i] - '0');
				}

				if ((odd_sum - even_sum) % 11 == 0)
					cout << in << " is a multiple of 11." << endl;
				else
					cout << in << " is not a multiple of 11." << endl;
			}
		}
	}
	return 0;
}