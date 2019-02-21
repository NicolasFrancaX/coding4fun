#include <bits/stdc++.h>

using namespace std;

int main() {
	string aux;
	string number;
	int A, B;

	int presentation;

	map<char, int> table;


	while (cin >> A >> B && A+B) {
		presentation = 0;

		for (int i = 0; i < 10; i++) {
			aux = "";
			aux.append(to_string(i));
			table[aux[0]] = 0;
		}

		for (int i = A; i <= B; i++) {
			number = to_string(i);
			for (unsigned int j = 0; j < number.length(); j++) {
				table[number[j]]++;
			}
		}

		for (int i = 0; i < 10; i++) {
			if (presentation++ == 0) cout << table[to_string(i)[0]];
			else cout << " " << table[to_string(i)[0]];
		}

		cout << endl;

	}

	return 0;
}
