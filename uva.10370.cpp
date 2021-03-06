#include <iostream>
#include <numeric>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			vector<int> score;
			double total, pass = 0;
			double average;
			cin >> total;
			for (int i = 0; i < total; i++) {
				int temp;
				cin >> temp;
				score.push_back(temp);
			}
			average = accumulate(score.begin(), score.end(), 0.0) / score.size();
			for (vector<int>::iterator i = score.begin(); i != score.end(); i++) {
				if (*i > average)
					pass++;
			}
			cout << fixed << setprecision(3) << (pass / total) * 100 << "%" << endl;
		}
	}
	return 0;
}
