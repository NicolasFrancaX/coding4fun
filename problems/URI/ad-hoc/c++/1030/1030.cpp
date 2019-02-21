#include <bits/stdc++.h>

using namespace std;

int main() {
	int T;
	int n, k;

	cin >> T;

	while (T--) {
		cin >> n >> k;

		vector<int> v;
		v.clear();

		for (int i = 1; i <= n; i++) {
			v.push_back(i);
		}

		rotate(v.begin(), v.begin()+1, v.end());

		while (v.size() != 1) {
			for (auto it = v.begin(); it != v.end(); it++) cout << *it << " ";

			cout << endl;
			v.erase(v.begin());
			rotate(v.begin(), v.begin()+((k-1)%n), v.end());
			n--;
		}

		cout << *v.begin() << endl;

	}

	return 0;
}
