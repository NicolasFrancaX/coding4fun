#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
	int N, Q;
	int aux;
	int k = 1;

	cin >> N >> Q;

	while (N != 0 && Q != 0) {
		vector<int> v;
		map<int, int> m;

		for (int i = 0; i < N; i++) {
			cin >> aux;
			v.push_back(aux);
		}

		sort(v.begin(), v.end());

		for (unsigned int i = 0; i < v.size(); i++) {
			if (!m[v[i]]) {
				m[v[i]] = i+1;
			}
		}
		
		cout << "CASE# " << k++ << ":" << endl;

		for (int i = 0; i < Q; i++) {
			cin >> aux;


			if (m[aux]) {
				cout << aux << " found at " << m[aux] << endl;
			} else {
				cout << aux << " not found" << endl;
			}
		}

		cin >> N >> Q;
	}

	return 0;
}
