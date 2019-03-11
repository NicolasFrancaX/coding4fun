#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	int n;
	int in;

	cin >> t;

	while (t--) {
		vector<int> v;

		cin >> n;	
		
		while (n--) {
			cin >> in; v.push_back(in);
		}

		sort(v.begin(), v.end());

		cout << (*(v.end()-1)-*(v.begin()))*2 << endl;
	}

	return 0;
}
