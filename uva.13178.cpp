#include <iostream>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	unsigned long long n;
	cin >> n;
		for (unsigned long long int i = 0; i < n; i++) {
			unsigned long long temp, result;
			cin >> temp;
			result = ((1 + temp) * temp) / 2;
			if (result % 3 == 0)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	
	return 0;
}
