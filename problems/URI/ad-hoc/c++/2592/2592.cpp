#include <bits/stdc++.h>

using namespace std;

int main() {
	int N;

	int in;
	
	while (cin >> N && N) {
		vector<int> v;
		vector<int> c;
		int result = 0;

		for (int i = 1; i <= N; i++)
			v.push_back(i);

		do {
			c.clear();
			for (int i = 0; i < N; i++) {
				cin >> in;
				c.push_back(in);
			}

			result++;
		} while (v != c);

		cout << result << endl;
	}

	return 0;
}
