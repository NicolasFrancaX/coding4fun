#include <iostream>
#include <string>
#include <cctype>
#include <sstream>

using namespace std;

int main() {
	string text;
	string aux;
	char f;
	bool answer;

	while (getline(cin, text)) {
		if (text.length() == 1 && text[0] == '*') break;

		answer = true;

		stringstream s(text);

		s >> aux;
		
		f = (char)tolower(aux[0]);

		while (s >> aux) {
			if ((char)tolower(aux[0]) != f) answer = false;
		}

		if (answer) {
			cout << "Y" << endl;
		} else {
			cout << "N" << endl;
		}
	}

	return 0;
}
