#include <bits/stdc++.h>
using namespace std;

class Farmer {
public:
	double area, animal, level;
	Farmer(int _area, int _animal, int _level) : area(_area), animal(_animal), level(_level) {};
};

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n;		
	while (cin >> n ) {			
		for (int i = 0; i < n; i++) {
			vector<Farmer> farmers;
			int farmer;
			cin >> farmer;
			for (int j = 0; j < farmer; j++) {
				int a, an, le;
				cin >> a >> an >> le;
				Farmer f(a, an, le);
				farmers.push_back(f);
			}
			double total = 0;
			for (int i = 0; i < farmers.size(); i++) {
				double each_ani_get = ((farmers[i].area / farmers[i].animal) * farmers[i].level);
				total += each_ani_get * farmers[i].animal;
			}
			cout << total << endl;
		}
		
	}
	return 0;
}
