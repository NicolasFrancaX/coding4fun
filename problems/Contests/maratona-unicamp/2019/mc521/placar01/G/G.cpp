#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	int victories;
	string fight;

	bool gate;

	cin >> n;
	victories = n;

	while (n--) {
		gate = false;

		cin >> fight;

		for (auto it = fight.begin(); it != fight.end(); it++) {
			if (gate) {
				if (*it == 'D') {
				       	victories--;
					break;
				}

				gate = false;
			}	

			if (*it == 'C') gate = true;
		}
	}

	cout << victories << endl;

	return 0;
}
