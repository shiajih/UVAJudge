#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n, id = 1;
	while (cin >> n) {
		while (n--) {
			vector<pair<char, int>> map;
			string in;
			cin >> in;
			char out[201] = { '\0' };
			int i = 0, out_i = 0, number_i = 0;
			char now_, number[3] = { '\0' };
			bool alp = false, numb = false;
			for (int i = 0; i < in.size(); i++) {
				if (in[i] >= 'A' && in[i] <= 'Z') {
					now_ = in[i];
					alp = true;
				}
				else {
					while (in[i] - '0' >= 0 && in[i] - '0' <= 9) {
						number[number_i] = in[i];
						number_i++, i++;
					}
					i--;
					numb = true;
				}
				if (alp && numb) {
					map.push_back(make_pair(now_, atoi(number)));
					alp = false, numb = false;
					number_i = 0;
					for (int z = 0; z < 3; z++) {
						number[z] = '\0';
					}
				}
			}
			for (vector<pair<char, int>>::iterator l = map.begin(); l != map.end(); l++) {
				for (int q = 0; q < l->second; q++) {
					out[out_i] = l->first;
					out_i++;
				}
			}
			cout << "Case " << id << ": ";
			for (int i = 0; out[i] != '\0'; i++) {
				cout << out[i];
			}
			id++;
			cout << endl;
		}
	}
	return 0;
}