#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n;
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			multiset<int,greater<int> > prices;
			int items, total = 0, actul = 0;
			cin >> items;
			for (int i = 0; i < items; i++) {
				int temp;
				cin >> temp;
				prices.insert(temp);
				total += temp;
			}
						
			multiset<int>::iterator it = prices.begin();
			for (int i = 1; i <= prices.size(); i++) {
				if (i % 3 == 0) {
					it++;
				}
				else {
					actul += *it;
					it++;
				}
			}
			cout << total - actul << endl;
		}
	}
	return 0;
}