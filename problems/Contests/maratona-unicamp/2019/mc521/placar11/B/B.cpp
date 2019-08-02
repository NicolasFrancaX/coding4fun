#include <bits/stdc++.h>

using namespace std;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int N, D;
	string number;

	while (cin >> N >> D && N+D) {
		cin >> number;

		int apagados = 0;

		deque<int> Dq;

		int i = 0;
		while (i < N) {
			while (!Dq.empty() && apagados < D && Dq.back() < number[i]-'0') {
				Dq.pop_back();
				apagados++;
			}

			if ((int)Dq.size() < N-D) Dq.push_back(number[i]-'0');

			i++;
		}

		for (auto it = Dq.begin(); it != Dq.end(); it++) {
			cout << *it;
		}

		cout << endl;

	}


	return 0;
}

