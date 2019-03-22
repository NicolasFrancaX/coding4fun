#include <bits/stdc++.h>

using namespace std;

int main() {
	int N;
	string in;

	while (cin >> N) {
		vector<string> original;
		vector<string> increasing;
		vector<string> decreasing;

		while (N--) {
			cin >> in; original.push_back(in);
		}

		decreasing = original; sort(decreasing.begin(), decreasing.end());
		increasing = original; sort(increasing.rbegin(), increasing.rend());


		if (original == decreasing) cout << "INCREASING" << endl;
		else if (original == increasing) cout << "DECREASING" << endl;
		else cout << "NEITHER" << endl;
	}

	return 0;
}

