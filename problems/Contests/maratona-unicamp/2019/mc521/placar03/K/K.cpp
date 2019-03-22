#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

class UnionFind {
private:
	vi p, rank, setSize;
	int numSets;

public:
	UnionFind(int N) {
		setSize.assign(N, 1); numSets = N; rank.assign(N, 0);
		p.assign(N, 0); for (int i = 0; i < N; i++) p[i] = i;
	}

	int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
	bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
	void unionSet(int i, int j) {
		if (!isSameSet(i, j)) { numSets--;
			int x = findSet(i), y = findSet(j);
			// rank is used to keep the tree short
			if (rank[x] > rank[y]) { p[y] = x; setSize[x] += setSize[y]; }
			else 		       { p[x] = y; setSize[y] += setSize[x];
						 if (rank[x] == rank[y]) rank[y]++; } } }
	int numDisjointSets() { return numSets; }
	int sizeOfSet(int i) { return setSize[findSet(i)]; }
};

// UnionFind
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int N, Q;
	int a, b;
	char operation;

	cin >> N >> Q;

	UnionFind UF(N);

	while (Q--) {
		cin >> operation >> a >> b;

		if (operation == '?')
			if (UF.isSameSet(a, b)) cout << "yes\n";
			else cout << "no\n";
		else UF.unionSet(a, b);
	}

	
	return 0;
}

