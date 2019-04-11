#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool verification(string W) {
	char f = W[0];

	for (auto it = W.begin(); it != W.end(); it++) {
		if (f != *it) return false;

		f++;
	}

	return true;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int N;

	cin >> N;
	string word;

	while (N--) {
		cin >> word;

		sort(word.begin(), word.end());

		if (verification(word)) cout << "Yes\n";
		else cout << "No\n";
	}
	
	return 0;
}
