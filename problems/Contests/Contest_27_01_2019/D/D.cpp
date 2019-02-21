#include <bits/stdc++.h>

using namespace std;

int main() {
	int NC;
	int N;
	int aux;

	int p;

	scanf("%d", &NC);

	while (NC--) {
		p = 0;

		vector<vector<int> > v(231);

		scanf("%d", &N);

		while (N--) {
			scanf("%d", &aux);


			v[aux].push_back(aux);	
		}

		for (auto it = v.begin(); it != v.end(); it++) {
			for (auto ut = (*it).begin(); ut != (*it).end(); ut++) {
				if (p++ == 0) {
					printf("%d", *ut);
				} else {
					printf(" %d", *ut);
				}
			}
		}

		printf("\n");	
	}

	return 0;
}
