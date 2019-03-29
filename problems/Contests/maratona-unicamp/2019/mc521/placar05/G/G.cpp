#include <bits/stdc++.h>

using namespace std;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, m, k;
	int v, u; // where will occur the swaps;
	int in;
	bool fall_of_holes = false;
	int where = 1;

	cin >> n >> m >> k;

	bitset<1000001> table(2);
	bitset<1000001> holes(0);
	
	for (int i = 0; i < m; i++) {
		cin >> in; holes[in] = true;
	}

	if (holes[1]) fall_of_holes = true; // se o x = 1 estiver com buraco

	
	for (int i = 0; i < k; i++) {
		cin >> v >> u;

		if (fall_of_holes) continue;
		
		if (table[v]) {
			table[v] = 0;
			table[u] = 1;
			where = u;


			if (holes[u]) fall_of_holes = true;
		} else if (table[u]){
			table[u] = 0;
			table[v] = 1;
			where = v;


			if (holes[v]) fall_of_holes = true;
		}

	} 

	cout << where << endl;

	return 0;
}

