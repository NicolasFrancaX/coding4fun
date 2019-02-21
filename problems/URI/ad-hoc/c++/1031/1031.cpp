#include <bits/stdc++.h>

using namespace std;

int main() {
	int N;

	while (cin >> N && N) {
		vector<int> v;
		vector<int> v_aux;
		for (int i = 0; i < N; i++)
			v.push_back(i+1);


		int a = 101;

		int m = 0;
		int index;

		while (a != 13) {
			v_aux = v;
			m++;

			index = 0;
			while (v_aux.size() != 1) {
				v_aux.erase(v_aux.begin()+index);
				
				index = (index+m-1) % (v_aux.size());
			}

			a = v_aux[0];
		}

		cout << m << endl;
	}

	return 0;
}
