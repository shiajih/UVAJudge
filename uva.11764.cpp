#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n, id = 1;
	while (cin >> n) {
		while (n--) {
			int total, high = 0, low = 0;
			cin >> total;
			vector<int> line;
			for (int i = 0; i < total; i++) {
				int hight;
				cin >> hight;
				line.push_back(hight);
			}
			for (int i = 0; i < line.size(); i++) {
				if (i + 1 < line.size() && line[i] > line[i + 1]) {
					low++;
				}
				else if (i + 1 < line.size() && line[i] < line[i + 1]) {
					high++;
				}
				else
					continue;
			}
			printf("Case %d: %d %d\n", id, high, low);
			id++;
		}
	}
	return 0;
}