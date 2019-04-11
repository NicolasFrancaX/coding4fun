#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

typedef long long int ull;

ull F[6*100000];
bool B[6*100000];

ull solve(ull n) {
	if (B[n]) return F[n];
	else {
		ull s1 = solve(n-1); 
		ull s2 = solve(n-2);
		B[n] = true;
		F[n] = (s1+s2)%(100000000+7);
		return F[n];
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	memset(B, 0, sizeof(B));	

	F[0] = 0; B[0] = true;
	F[1] = 1; B[1] = true;

	ull T;
	ull n;

	scanf("%lld", &T);
	while (T--) {
		scanf("%lld", &n);
		
		printf("%lld\n", solve(n));
	}


	return 0;
}
