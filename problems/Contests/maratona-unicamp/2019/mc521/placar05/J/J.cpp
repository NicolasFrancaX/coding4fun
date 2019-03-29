#include <bits/stdc++.h>

using namespace std;

typedef long long ll;



int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	
	int N;
	int sum = 0;
	int in;
	cin >> N;
	vector<int> V;
	V.reserve(N);
	for(int i = N; i ; i--) {
		cin >> in; V.push_back(in);
		sum+=in;
	}

	if (sum != N-1) {
		printf("NO\n");
		return 0;
	}
	else {
		printf("YES\n");
		// player a matar
		int i = N-1;
 		// player a ser morto
		int j = N-1;
		// comecando pelo com kills !=0
		while(!V[i]) i--; 
		for(; i >= 0 ; i--) {
			// k = numero de kills do player
			for(int k = 0; k < V[i]; k++) { 
				printf("%d %d\n",i+1,j+1);
				j--;
			}
		}
	}
	return 0;
}


