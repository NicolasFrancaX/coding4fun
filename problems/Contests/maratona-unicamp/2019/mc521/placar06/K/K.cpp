#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	
	ll T;
	ll a;

	cin >> T;

	while (T--) {
		cin >> a;

		cout <<  (ll)(sqrt((a+0.0)/6)) << endl;
	}

	

	return 0;
}

