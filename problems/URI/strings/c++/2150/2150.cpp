#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl

using namespace std;

int main() {
	string vowels_alphabet;
	string phrase;
	int count;

	while (cin >> vowels_alphabet) {
		/* If the char is in s, count++ */
		set<char> s;

		for (auto it = vowels_alphabet.begin(); it != vowels_alphabet.end(); it++) {
			s.insert(*it);
		}

		count = 0;

		cin.ignore(100, '\n');
		getline(cin, phrase);

		for (auto it = phrase.begin(); it != phrase.end(); it++) {
			/* Tell us if *it is element of s */
			if ( find(s.begin(), s.end(), *it) != s.end() ) {
				count++;
			}
		}	

		cout << count << endl;
	}

	return 0;
}
