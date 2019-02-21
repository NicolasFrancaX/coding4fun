#include <bits/stdc++.h>

using namespace std;

int main() {
	int N;
	int A, B;

	while (cin >> N) {
		cin >> A >> B;

		if (A+B > N) cout << "Deixa para amanha!" << endl;
		else cout << "Farei hoje!" << endl;
	}

	return 0;
}
