#include <bits/stdc++.h>
using namespace std;

int find_digit(int in) {
	int retu = 0;
	while (in != 0) {
		in /= 10;
		retu++;
	}
	return retu;
}

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	string in;
	while(cin >> in) {
		if (in == "END")
			return 0;

		else if(in == "1"){
			cout << 1 << endl;
		}

		else{
			string temp;
			int count = 1, prev = 0, now = in.size();
			while (prev != now) {
				prev = now;
				now = find_digit(prev);
				count++;
			}
			cout << count << endl;
		}
	}
	return 0;
}