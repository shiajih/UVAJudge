#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n, id = 1;
	while (cin >> n) {
		while (n--) {
			int total;
			cin >> total;
			vector<int> line;
			for (int i = 0; i < total; i++) {
				int age;
				cin >> age;
				line.push_back(age);
			}
			sort(line.begin(), line.end());
			printf("Case %d: %d\n", id, line[total / 2]);
			id++;
		}
	}
	return 0;
}