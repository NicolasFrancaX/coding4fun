#include <bits/stdc++.h>

#define REP(i, a, b) for (ull i = ull(a); i <= ull(b); i++)

using namespace std;

typedef long long ull;
typedef vector<ull> vi;

ull g;
ull n_g;

ull _sieve_size;
bitset<10000010> bs;
vi primes;

ull memo[100001];

void sieve(ull upperbound) {
	_sieve_size = upperbound+1;
	bs.reset(); bs.flip();
	bs.set(0, false);
	for (ull i = 2; i <= _sieve_size; i++) if (bs.test((size_t)i)) {
		for (ull j = i*i; j <= _sieve_size; j+= i) bs.set((size_t)j, false);
		primes.push_back((ull)i);
	}
}

bool isPrime(ull N) {
	if (N < _sieve_size) return bs.test(N);

	REP(i, 0, primes.size() - 1) if (N % primes[i] == 0) return false;
	return true;
}

void primeFactors(ull N) {
	ull PF_idx = 0, PF = primes[PF_idx];

	ull n = -1;

	while (N != 1 && (PF * PF <= N)) {
		while (N % PF == 0) {
				N /= PF;

				if (n != PF) {
					memo[PF]++;

					if (memo[PF] > n_g) {
						n_g = memo[PF];
						g = PF;

						/*
						cout << n_g << endl;
						cout << g << endl;
						*/
					}
				}
				
				n = PF;


		}

		PF = primes[++PF_idx];
	}

	if (N != 1) {
		if (n != N) {
			if (memo[N] > n_g) {
				n_g = memo[N];
				g = N;
			}
			memo[N]++;
		}
	}
}

int main() {

	ull l, r;	

	sieve(10000000);
	//prullf("%d\n", isPrime(5915587277));
	


	while (cin >> l >> r) {
		memset(memo, 0, sizeof(memo));
		g = -1;
		n_g = -1;
		
		for (ull i = l; i <= r; i++) {
			primeFactors(i);
		}
		
		cout << g << endl;
	}

	return 0;
}
