#include <bits/stdc++.h>

using namespace std;

int main() {
	int N;
	string number;

	while (cin >> N) {
		set<string> s;

		while (N--) {
			cin >> number;
			s.insert(number);
		}

		for (auto it = s.begin(); it != s.end(); it++) {
			cout << *it << endl;
		}
	}

	return 0;
}
