#include <iostream>
#include <vector>
#include <cmath>
#include <cstdio>
using namespace std;

class point {
public:
	int x, y;
	point(int _x = 0, int _y = 0) : x(_x), y(_y) {};
};

vector<point> legal_step(point p) {
	vector<point> res;
	point ori = p;
	while (p.x != 9) {	//往右
		p.x++;
		res.push_back(p);
	}
	p = ori;
	while (p.x != 0) {	//往左
		p.x--;
		res.push_back(p);
	}
	p = ori;
	while (p.y != 0) {	//往上
		p.y--;
		res.push_back(p);
	}
	p = ori;
	while (p.y != 9) {	//往下
		p.y++;
		res.push_back(p);
	}
	p = ori;
	while (p.x != 9 && p.y != 0) {	//往右上
		p.x++;
		p.y--;
		res.push_back(p);
	}
	p = ori;
	while (p.x != 9 && p.y != 9) {	//往右下
		p.x++;
		p.y++;
		res.push_back(p);
	}

	p = ori;
	while (p.x != 0 && p.y != 0) {	//往左上
		p.x--;
		p.y--;
		res.push_back(p);
	}

	p = ori;
	while (p.x != 0 && p.y != 9) {	//往左下
		p.x--;
		p.y++;
		res.push_back(p);
	}
	return res;

}

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	point start, end;
	while (cin >> start.x >> start.y >> end.x >> end.y) {
		int count = 0;
		if (start.x == 0 && start.y == 0 && end.x == 0 && end.y == 0) {
			return 0;
		}
		else if (start.x == end.x && start.y == end.y) {
			cout << 0 << endl;
		}
		else {			
			vector<point> result;
			bool flag = false;
			point update_start = start;
			while (!flag) {				
				count++;
				result = legal_step(update_start);
				vector<point>::iterator it = result.begin();
				for (it; it != result.end(); it++) {
					if (it -> x == end.x && it -> y == end.y) {
						cout << count << endl;
						flag = true;
						break;
					}
					else {	//計算與end point的差最小的						
						if (abs(it->x - end.x) <= abs(update_start.x - end.x) && abs(it->y - end.y) <= abs(update_start.y - end.y)) {
							update_start.x = it -> x;
							update_start.y = it -> y;
						}
					}
				}
			}			
		}
	}
	return 0;
}
