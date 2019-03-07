#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl;

using namespace std;

int main() {
	int C;
	int N;
	string s, a;

	cin >> C;

	while (C--) {
		cin >> N;

		set<string> bag;

		while (N--) {
			cin >> s >> a;
			
			if (a == "chirrin") {
				bag.insert(s);
			} else if (a == "chirrion") {
				set<string>::iterator it = find(bag.begin(), bag.end(), s);

				if (it != bag.end()) {
					bag.erase(it);
				}
			}
		}

		cout << "TOTAL" << endl;

		for (auto ut = bag.begin(); ut != bag.end(); ut++) {
			cout << *ut << endl;
		}
	}

	return 0;
}
