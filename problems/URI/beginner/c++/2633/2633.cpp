#include <bits/stdc++.h>

using namespace std;

typedef pair<int, string> pis;
int main() {
	int N;
	string meat;
	int D;

	while (cin >> N) {
		set<pis> s;
		int pres = 0;

		while (N--) {
			cin >> meat >> D;

			s.insert(make_pair(D, meat));
		}

		for (auto it = s.begin(); it != s.end(); it++)
			if (pres++ == 0) cout << (*it).second;
			else cout << " " << (*it).second;

		cout << endl;
	}

	
	return 0;
}
