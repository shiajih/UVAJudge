#include <iostream>
#include <string>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	string days[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" ,"Sunday" };
	int n;
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			int month, day;
			cin >> month >> day;
			switch (month) {
			case 1: {
				cout << days[((5 + day) - 1) % 7] << endl;
				break;
			}
			case 2: {
				cout << days[((1 + day) - 1) % 7] << endl;
				break;
			}
			case 3: {
				cout << days[((1 + day) - 1) % 7] << endl;
				break;
			}
			case 4: {
				cout << days[((4 + day) - 1) % 7] << endl;
				break;
			}
			case 5: {
				cout << days[((6 + day) - 1) % 7] << endl;
				break;
			}
			case 6: {
				cout << days[((2 + day) - 1) % 7] << endl;
				break;
			}
			case 7: {
				cout << days[((4 + day) - 1) % 7] << endl;
				break;
			}
			case 8: {
				cout << days[((day)-1) % 7] << endl;
				break;
			}
			case 9: {
				cout << days[((3 + day) - 1) % 7] << endl;
				break;
			}
			case 10: {
				cout << days[((5 + day) - 1) % 7] << endl;
				break;
			}
			case 11: {
				cout << days[((1 + day) - 1) % 7] << endl;
				break;
			}
			case 12: {
				cout << days[((3 + day) - 1) % 7] << endl;
				break;
			}
			}
		}
	}
	return 0;
}
