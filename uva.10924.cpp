#include <bits/stdc++.h>
using namespace std;

int is_prime(int x) {
	if (x == 1) 
		return 1;
	for (int i = 2; i * i <= x; i++)
		if (x % i == 0) return 0;
	return 1;
}

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	string s;
	map<char, int> charac;
	int value = 1;
	for (int i = 97; i <= 122; i++) {
		charac.insert(make_pair(char(i), value));
		value++;
	}
	for (int i = 65; i <= 90; i++) {
		charac.insert(make_pair(char(i), value));
		value++;
	}

	while (cin >> s) {
		int sum = 0;
		for (int i = 0; i < s.size(); i++) {
			map<char, int>::iterator it;
			it = charac.find(s[i]);
			sum += it->second;
		}
		bool prime = is_prime(sum);
		//cout << sum;
		if (prime)
			cout << "It is a prime word." << endl;
		else
			cout << "It is not a prime word." << endl;
	}
	
	return 0;
}
