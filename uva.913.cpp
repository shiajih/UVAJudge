#include <iostream>
using namespace std;

inline long long find_nth_row(long long n) {
	return (n + 1) / 2;
}

inline long long find_first(long long n) {
	return n * n + ((n - 1)*(n - 3));
}

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n;
	while (cin >> n) {
		long long sum = 0;
		long long counter = find_nth_row(n);	//第nth row
		long long first = find_first(counter);	//算該列第1個奇數是多少
		for (int i = 3; i >= 1; i--) {
			sum = sum + first + (n - i) * 2;
		}
		cout << sum << endl;
	}
	return 0;
}
