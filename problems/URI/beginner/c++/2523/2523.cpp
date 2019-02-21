#include <bits/stdc++.h>

using namespace std;

int main() {
	string alfabet;
	int N;
	int in;
	
	while (cin >> alfabet) {
		cin >> N;

		for (int i = 0; i < N; i++) {
			cin >> in;

			cout << alfabet[in-1];
		}

		cout << endl;
	}

	return 0;
}
