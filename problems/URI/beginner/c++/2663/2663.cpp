#include <bits/stdc++.h>

using namespace std;

int main() {
	int N;
	int K;
	int in;

	vector<int> classifications;
	map<int, int> m;
	map<int, bool> x;
	map<int, int> start;
	
	cin >> N;
	cin >> K;

	for (int i = 0; i < N; i++) {
		cin >> in;
		m[in]++;
		classifications.push_back(in);
	}

	sort(classifications.rbegin(), classifications.rend());


	for (int i = 0; i < N; i++) {
		if (!x[classifications[i]]) {
			start[classifications[i]] = i;
			x[classifications[i]] = true;
		}
	}

	cout << K + m[classifications[K-1]] - (K-start[classifications[K-1]])<< endl;

	return 0;
}
