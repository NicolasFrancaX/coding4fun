#include <iostream>
#include <vector>
#include <set>

using namespace std;

int mod(int a) {
	if (a > 0) return a;
	return -a;
}

int main() {
	int N, B;

	while (cin >> N >> B && N != 0) {
		vector<int> v;
		set<int> s;

		int aux;

		for (int i = 0; i < B; i++) {
			cin >> aux;
			v.push_back(aux);
		}

		for (int i = 0; i < B; i++) {
			for (int j = 0; j < B; j++) {
				s.insert(mod(v[i]-v[j]));
			}
		}

		if (s.size() == (unsigned int)(N+1)) {
			cout << "Y" << endl;
		} else {
			cout << "N" << endl;
		}
	}

	return 0;
}
