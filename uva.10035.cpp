#include <bits/stdc++.h>

using namespace std;
int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	string a, b, newstring;
	while (cin >> a >> b) {
		int count = 0;
		if (a == "0" && b == "0")
			return 0;
		else {
			if (b.size() < a.size()) {
				newstring = string(a.size() - b.size() , '0').append(b);
				bool carry = false;
				for (int i = a.size() - 1; i >= 0; i--) {
					if ((a[i] - '0') + (newstring[i] - '0') + (carry) >= 10) {
						carry = 1;
						count++;
					}
					else {
						carry = 0;
					}
				}
			}
			else if (a.size() < b.size()) {
				newstring = string(b.size() - a.size(), '0').append(a);
				bool carry = false;
				for (int i = b.size() - 1; i >= 0; i--) {
					if ((newstring[i] - '0') + (b[i] - '0') + (carry) >= 10) {
						carry = 1;
						count++;
					}
					else {
						carry = 0;
					}
				}
			}
			else {
				bool carry = false;
				for (int i = a.size() - 1; i >= 0; i--) {
					if ((a[i] - '0') + (b[i] - '0') + (carry) >= 10) {
						carry = 1;
						count++;
					}
					else {
						carry = 0;
					}
				}
			}
		}
		if (count == 0)
			cout << "No carry operation." << endl;
		else if (count == 1)
			cout << "1 carry operation." << endl;
		else
			cout << count << " carry operations." << endl;
	}
	return 0;
}
