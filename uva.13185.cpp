#include <iostream>
#include <vector>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n;
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			int temp, sum = 0;
			cin >> temp;
			vector<int> factor;
			for (int j = 1; j <= temp; j++) {
				if (temp % j == 0 && temp > j)
					factor.push_back(j);
			}
			vector<int>::iterator it = factor.begin();
			for (it; it != factor.end(); it++) {
				//cout << *it;
				sum += *it;
			}
			if (sum == temp)
				cout << "perfect" << endl;
			else if (sum < temp)
				cout << "deficient" << endl;
			else
				cout << "abundant" << endl;
		}
	}
	return 0;
}
