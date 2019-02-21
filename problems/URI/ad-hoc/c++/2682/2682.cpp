#include <bits/stdc++.h>

using namespace std;

int main() {
	int greater = INT_MIN;
	int N;
	bool get_input = true;

	while (cin >> N) {
		if (get_input) {
			if (greater < N) greater = N;
			else get_input = false;
		}
	}

	cout << greater+1 << endl;
	return 0;
}
