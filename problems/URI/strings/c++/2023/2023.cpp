#include <iostream>
#include <map>
#include <set>
#include <cctype>

using namespace std;

string tolower(string t) {
	string a = "";

	for (auto it = t.begin(); it != t.end(); it++) {
		a.append(1u, (char)tolower(*it));
	}

	return a;
}

int main() {
	set<string> s;
	map<string, string> m;

	string text;
	string crianca;
	string crianca_lower;

	while (getline(cin, text)) {
		
		crianca_lower = tolower(text);
		s.insert(crianca_lower);
		m[crianca_lower] = text;
	}

	set<string>::iterator it = s.end();
	it--;
	cout << m[*it] << endl;


	return 0;
}
