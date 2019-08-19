#include <bits/stdc++.h>

using namespace std;


int main() {
	/* Initializing Map */
	map<char, int> keypad;

	// 0:
	keypad[' '] = 0;
	
	// 2:
	keypad['a'] = 2;
	keypad['b'] = 22;
	keypad['c'] = 222;

	// 3:
	keypad['d'] = 3;
	keypad['e'] = 33;
	keypad['f'] = 333;
	
	// 4:
	keypad['g'] = 4;
	keypad['h'] = 44;
	keypad['i'] = 444;
	
	// 5:
	keypad['j'] = 5;
	keypad['k'] = 55;
	keypad['l'] = 555;
	
	// 6:
	keypad['m'] = 6;
	keypad['n'] = 66;
	keypad['o'] = 666;
	
	// 7:
	keypad['p'] = 7;
	keypad['q'] = 77;
	keypad['r'] = 777;
	keypad['s'] = 7777;
	
	// 8:
	keypad['t'] = 8;
	keypad['u'] = 88;
	keypad['v'] = 888;
	
	// 9:
	keypad['w'] = 9;
	keypad['x'] = 99;
	keypad['y'] = 999;
	keypad['z'] = 9999;

	/* ========= */
	
	int N;
	int Case = 1;
	string line;

	int aux = -1;

	cin >> N;

	cin.ignore(100, '\n');

	while (N--) {
		aux = -1;

		getline(cin, line);

		cout << "Case #" << Case++ << ": ";
		for (auto it = line.begin(); it != line.end(); it++) {
			if (keypad[*it] % 10 == aux) {
				cout << ' ';
			}

			cout << keypad[*it];

			aux = keypad[*it] % 10;
		}	

		cout << endl;
	}

	return 0;
}

