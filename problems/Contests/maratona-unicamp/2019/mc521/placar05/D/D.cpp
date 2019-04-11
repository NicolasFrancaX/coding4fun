#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

/*
 * Make sum from a vector:
 *
 * #include <numeric>
 *
 * sum = std::accumulate(V.begin(), V.end(), 0);
 *
 */

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	int in;
	int S; // S: State; S = 0 (par), S = 1 (impar), S = 2 (end-of-game)
	int odds, evens;

	while (cin >> n) {
		S = -1;
		odds = 0;
		evens = 0;

		vector<int> V;
		V.clear();

		


		for (int i = 0; i < n; i++) {
			cin >> in;

			if (in%2==0) evens++;
			else 	     odds++;

			V.push_back(in);
		}


		sort(V.rbegin(), V.rend());


		if (evens > odds) S = 0;
		else if (odds > evens) S = 1;
		else 
			if (*(V.begin())%2==0) S = 0; // par
			else		       S = 1; // impar

		
		if (S == 0) {
			vector<int>::iterator it = find_if(V.begin(), V.end(),
				[](int i) { return i%2==0; });
			V.erase(it);
		} else {
			vector<int>::iterator it = find_if(V.begin(), V.end(),
				[](int i) { return i%2!=0; });
			V.erase(it);
			
		}


		while (S != 2) {

			if (S == 1) {
				if (any_of(V.begin(), V.end(), [](int i) { return i%2==0; })) {
					S = 0;
					vector<int>::iterator it = find_if(V.begin(), V.end(),
							[](int i) { return i%2==0; });
					V.erase(it);
				} else S = 2;
			} else if (S == 0) {
				S = 1;
				if (any_of(V.begin(), V.end(), [](int i) { return i%2!=0; })) {
					vector<int>::iterator it = find_if(V.begin(), V.end(),
							[](int i) { return i%2!=0; });
					V.erase(it);
				} else S = 2;
			}

		}

		if (V.size() == 0) cout << 0 << endl;
		else cout << accumulate(V.begin(), V.end(), 0) << endl;

	}		
	
	return 0;
}
