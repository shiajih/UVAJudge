#include <bits/stdc++.h>
using namespace std;

class Provider {
public:
	string name;
	vector<string> provide_list;
	int order, pass;
	double price;
	Provider(string _name, int _order, double _price, int _pass, vector<string> _provide_list) : name(_name), order(_order), price(_price), pass(_pass), provide_list(_provide_list) {};
};
bool operator==(const Provider &lhs, const int rhs) {
	return lhs.pass == rhs;
}

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n, p, id = 1, totalcount = 0;	//需求表上面需求的項目數目, 投標廠商的數目	
	while (cin >> n >> p) {	
			
		vector<string> needs;
		vector<Provider> provider;
		if (n == 0 && p == 0)
			return 0;
		else {
			if (totalcount)
				cout << endl;
			cin.ignore();
			for (int i = 0; i < n; i++) {
				string temp;
				getline(cin, temp);				
				needs.push_back(temp);
			}
			
			for (int i = 0; i < p; i++) {
				string temp;
				double d;
				int r;
				getline(cin, temp);
				cin >> d >> r;
				vector<string> temp_provide;
				cin.ignore();
				for (int i = 0; i < r; i++) {
					string temp2;
					getline(cin, temp2);
					temp_provide.push_back(temp2);
				}
				Provider p(temp, id, d, r, temp_provide);
				provider.push_back(p);
				id++;
			}
			//cout << provider[0].name << provider[1].name << provider[2].name << provider[3].name << "!!!";
			int max_pass = 0, max_pass_count = 0;
			for (int i = 0; i < p; i++) {	
				if (provider[i].pass > max_pass) {
					max_pass = provider[i].pass;
					max_pass_count = 1;
				}
				else if (provider[i].pass == max_pass) {
					max_pass_count++;
				}
			}	
			//cout << provider[0].name << "!!!";
			if (max_pass_count == 1) {
				cout << "RFP #" << ++totalcount << endl;
				vector<Provider>::iterator it = find(provider.begin(), provider.end(), max_pass);
				cout << it->name << endl;				
			}
			else {
				vector<Provider> candicate;				
				for (int i = 0; i < max_pass_count; i++) {
					vector<Provider>::iterator it = find(provider.begin(), provider.end(), max_pass);
					candicate.push_back(*it);
					provider.erase(it);
				}
				double minprice = 999999999.999999;
				int index = 0;
				//cout << candicate.size();
				for (int j = 0; j < candicate.size(); j++) {
					//cout << candicate[j].price << "!!!";
					if (candicate[j].price < minprice) {
						minprice = candicate[j].price;
						index = j;
					}
				}
				
				//cout << index << "@!@";
				cout << "RFP #" << ++totalcount << endl;
				cout << candicate[index].name << endl;				
			}
		}
	}
	return 0;
}
