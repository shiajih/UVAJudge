#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, id = 1;
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	cin >> n;
	for (int a = 0; a < n; a++) {
		char sm[15] = { '\0' }, em[15] = { '\0' };
		long long sdate, syear, edate, eyear;
		scanf("%s %lld, %lld", &sm, &sdate, &syear);
		scanf("%s %lld, %lld", &em, &edate, &eyear);		
		if (strcmp(sm, "January") != 0 && strcmp(sm, "February") != 0) 
			syear++;
		if (strcmp(em, "January") == 0 || (strcmp(em, "February") == 0 && edate < 29)) 
			eyear--;
		int four = (eyear / 4) - ((syear - 1) / 4);
		int hund = (eyear / 100) - ((syear - 1) / 100);
		int fourhund = (eyear / 400) - ((syear - 1) / 400);

		int res = four - hund + fourhund;
		printf("Case %d: %d\n", id, res);
		id++;
	}
	return 0;
}