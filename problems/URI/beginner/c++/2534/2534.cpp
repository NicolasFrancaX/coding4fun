#include <bits/stdc++.h>

using namespace std;

int main() {
	int N, Q;
	int in;

	while (cin >> N >> Q) {
		vector<int> grades;

		for (int i = 0; i < N; i++) {
			cin >> in;

			grades.push_back(in);
		}

		sort(grades.begin(), grades.end());
		reverse(grades.begin(), grades.end());

		while (Q--) {
			cin >> in;

			cout << grades[in-1] << endl;
		}

	}
	
	return 0;
}
