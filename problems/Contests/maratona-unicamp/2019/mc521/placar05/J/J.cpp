#include <iostream>
#include <cstdio>
#include <vector>

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

	if (sum <= N-1) {
		printf("YES\n");

		int i = N-1; 
		
		while(!V[i]) i--;

		for(; i >= 0 ; i--)
			while(V[i]--) {
				printf("%d %d\n",i+1,N);
				N--;
			}
	} else {
		printf("NO\n");

		return 0;
	} 

	return 0;
}
