#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	string in;
	while(cin >> in) {

		if (in.size() < 8) {
			if (in == "0")
				return 0;
			int less8 = stod(in);
			if (less8 % 17 == 0)
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		
		else {
			long long odd[101] = { 0 };
			long long even[101] = { 0 };
			long long sum_o = 0, sum_e = 0;
			int j = in.size();
			int oindex = 0, eindex = 0;
			bool odd_f = true;
			while (j >= 8) {
				string need(in, j - 8, 8);


				if (odd_f) {
					odd[oindex] = stoll(need);
					odd_f = false;
					oindex++;
				}

				else {
					even[eindex] = stoll(need);
					odd_f = true;
					eindex++;
				}

				j -= 8;
			}

			if (j < 0) {
				j += 8;
				string last(in, 0, j % 8);
				if (odd_f)
					odd[oindex] = stoll(last);
				else
					even[eindex] = stoll(last);
			}

			else if (j > 0) {
				string last(in, 0, j % 8);
				if (odd_f)
					odd[oindex] = stoll(last);
				else
					even[eindex] = stoll(last);
			}

			for (int k = 0; odd[k] != 0; k++) {
				//cout << "odd" << odd[k] << endl;
				sum_o += odd[k];
			}
			for (int l = 0; even[l] != 0; l++) {
				//cout << "even" << even[l] << endl;
				sum_e += even[l];
			}
			if ((sum_o - sum_e) % 17 == 0)
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
	}
	return 0;
}