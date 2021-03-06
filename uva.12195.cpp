#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	string in;
	unordered_map<char, double> map({ { 'W', 1 }, { 'H', 0.5 }, { 'Q',0.25 }, { 'E',0.125 }, { 'S', 0.0625 }, { 'T', 0.03125 }, { 'X',0.015625 } });
	while (cin >> in) {
		if (in == "*")
			return 0;
		else {
			int count = 0, inner = 1;
			double total = 0;	
			for (; inner < in.size();) {
				while (in[inner] != '/') {
					unordered_map<char, double>::iterator i = map.find(in[inner]);
					total = total + i->second;
					inner++;
				}
				if (total == 1) {
					count++;
					total = 0;
					inner++;
				}
				else {
					total = 0;
					inner++;
				}
			}
			cout << count << endl;
		}
	}
	return 0;
}