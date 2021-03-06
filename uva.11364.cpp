#include <iostream>
#include <set>
#include <cmath>
#include <numeric>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		for (int j = 0; j < n; j++) {
			int total_step = 0;
			double total_shop, temp;
			set<double> addre;
			cin >> total_shop;
			for (int l = 0; l < total_shop; l++) {
				double temp1;
				cin >> temp1;
				addre.insert(temp1);
			}
			double park_pos = ceil(accumulate(addre.begin(), addre.end(), 0) / total_shop);
			addre.insert(park_pos);
			set<double>::iterator i = addre.find(park_pos);
			while (i != addre.begin()) {
				total_step += abs(*i - *(--i));
			}
			set<double>::iterator from_end = addre.end();
			total_step += abs(*i - *(--from_end));	//	第一個減最後一個
			while (from_end != addre.find(park_pos)) {
				total_step += abs(*from_end - *(--from_end));
			}
			cout << total_step << endl;
		}
	}
	return 0;
}
