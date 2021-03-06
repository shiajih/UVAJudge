#include <bits/stdc++.h>
using namespace std;

int is_prime(int x) {
	if (x <= 1) return 0;           
	for (int i = 2; i * i <= x; i++)
		if (x % i == 0) return 0;   
	return 1;
}

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n, id = 1;
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			map<char, int> chartocount;
			map<char, int> output;
			string s;
			cin >> s;
			for (int i = 0; i < s.size(); i++) {
				if (chartocount.find(s[i]) != chartocount.end()) { //先前出現過
					chartocount.insert(make_pair(s[i], chartocount.find(s[i])->second++));
				}
				else {
					chartocount.insert(make_pair(s[i], 1));
				}
			}
			map<char, int>::iterator it = chartocount.begin();
			for (it; it != chartocount.end(); it++) {
				if (is_prime(it->second)) {
					output.insert(make_pair(it->first, (int)it->first));
				}
			}
			if (output.size() == 0) {
				cout << "Case " << id << ": " << "empty" << endl;
				id++;
			}
			else {
				map<char, int>::iterator it2 = output.begin();
				cout << "Case " << id << ": ";
				for (it2; it2 != output.end(); it2++) {
					cout << it2->first;
				}
				cout << endl;
				id++;
			}
		}
	}
	return 0;
}
