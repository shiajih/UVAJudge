#include <iostream>
#include <map>
#include <cstdio>
#include <string>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	string in;
	map<char, char> list;
	list['d'] = 'a', list['e'] = 'q', list['c'] = 'z';
	list['f'] = 's', list['r'] = 'w', list['v'] = 'x';
	list['t'] = 'e', list['g'] = 'd', list['b'] = 'c';
	list['y'] = 'r', list['h'] = 'f', list['n'] = 'v';
	list['u'] = 't', list['j'] = 'g', list['m'] = 'b';
	list['i'] = 'y', list['k'] = 'h', list[','] = 'n';
	list['o'] = 'u', list['l'] = 'j', list['.'] = 'm';
	list['p'] = 'i', list[';'] = 'k', list['/'] = ',';
	list['['] = 'o', list['\''] = 'l', list[']'] = 'p', list['\\'] = ';';
	list['2'] = '`', list['3'] = '1', list['4'] = '2', list['5'] = '3';
	list['6'] = '4', list['7'] = '5', list['8'] = '6', list['9'] = '7';
	list['0'] = '8', list['-'] = '9', list['='] = '0';
	char c;
	while ((c = getchar()) != EOF) {
		if (c == ' ')
			cout << ' ';
		else if (c == '\n')
			cout << endl;
		else {
			map<char, char>::iterator it = list.find(c);
			cout << it->second;
		}

	}
	return 0;
}
