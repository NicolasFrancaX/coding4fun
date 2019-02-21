#include <bits/stdc++.h>

using namespace std;

bool verification(string card) {
	if (card.length() != 8) return false;
	if (card[3] != '-') return false;
	for (int i = 0; i < 3; i++)
		if (!isupper(card[i])) return false;
	for (int i = 4; i < 8; i++)
		if (!isdigit(card[i])) return false;

	return true;
}

int main() {
	int N;
	string card;

	cin >> N;

	while (N--) {
		cin >> card;

		if (!verification(card)) {
			cout << "FAILURE" << endl;
			continue;
		}

		if (card[7] == '1' || card[7] == '2') cout << "MONDAY" << endl;
		if (card[7] == '3' || card[7] == '4') cout << "TUESDAY" << endl;
		if (card[7] == '5' || card[7] == '6') cout << "WEDNESDAY" << endl;
		if (card[7] == '7' || card[7] == '8') cout << "THURSDAY" << endl;
		if (card[7] == '9' || card[7] == '0') cout << "FRIDAY" << endl;
	}

	return 0;
}
