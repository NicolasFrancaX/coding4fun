#include <bits/stdc++.h>
#define debug(x) cout << endl << #x " = " << x << endl;

using namespace std;

void findAllReplace(string &original, string text, string search, string repl) {
	unsigned int pos = (unsigned int)text.find(search);

	while (pos <= text.length()) {
		original.replace(pos, search.size(), repl);
		text = original;
		transform(text.begin(), text.end(), text.begin(), ::toupper);
		pos = (unsigned int)text.find(search, pos+1);
	}
}

int main() {
	string tag;
	string number;
	string phrase;

	/* Booleans */
	bool is_in_tag;
	bool end;

	/* Auxs */
	string inside_tag;
	string original;
	string::iterator ut;


	while (cin >> tag) {
		/* Inicialization */
		is_in_tag = false;
		inside_tag = "";
		end = false;

		cin >> number;
		cin.ignore(100, '\n');
		getline(cin, phrase);

		/* Iteração */
		for (auto it = phrase.begin(); it != phrase.end(); it++) {
			original = "";
			if (*it == '<') {
				is_in_tag = true;
				cout << '<';
			} else {
				cout << *it;
			}

			if (is_in_tag) {
				for (ut = it+1; ut != find(it, phrase.end(), '>') && ut != phrase.end(); ut++) {
					inside_tag.append(1u, *ut);
				}

				original = inside_tag;

				transform(inside_tag.begin(), inside_tag.end(), inside_tag.begin(), ::toupper);

				transform(tag.begin(), tag.end(), tag.begin(), ::toupper);

				findAllReplace(original, inside_tag, tag, number);

				if (ut == phrase.end()) {
					it = phrase.end();
					cout << original;
					end = true;
				} else {
					cout << original << ">";
					it = find(it, phrase.end(), '>'); 
				}

				/* Reinicializando */
				is_in_tag = false;
				inside_tag = "";
				original = "";
			}

			if (end) {
				break;
			}
		}

		cout << endl;
	}
	
	return 0;
}