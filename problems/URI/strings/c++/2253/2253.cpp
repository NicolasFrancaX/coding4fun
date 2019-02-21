#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl

using namespace std;

bool length_password(string password) {
	return password.length() >= 6 && password.length() <= 32;
}
int main() {
	string password;

	/* Booleanos */
	bool have_uppercase;
	bool have_lowercase;
	bool have_number;
	bool dont_have_punctuation;
	bool dont_have_space;
	
	while (getline(cin, password)) {
		have_uppercase = false;
		have_lowercase = false;
		have_number = false;
		dont_have_punctuation = true;
		dont_have_space = true;

		/* Logica */

		for (auto it = password.begin(); it != password.end(); it++) {
			if (isupper(*it)) {
				have_uppercase = true;
			} else if (islower(*it)) {
				have_lowercase = true;
			} else if (isdigit(*it)) {
				have_number = true;
			} else if (*it == ' ') {
				dont_have_space = false;
			} else {
				dont_have_punctuation = false;
			}
		}

		/* Apresentacao */
		if (have_uppercase && have_lowercase && have_number && dont_have_punctuation && dont_have_space && length_password(password)) {
			cout << "Senha valida." << endl;
		} else {
			cout << "Senha invalida." << endl;
		}
	}

	return 0;
}
