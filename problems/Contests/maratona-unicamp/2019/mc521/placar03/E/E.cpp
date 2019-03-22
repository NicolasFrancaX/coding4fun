#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

bool tree;

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

int main() {
	tree = true;
	int V, E;
	int v1, v2;

	cin >> V >> E;

	UnionFind UF(V);
	vector<vector<int>> graph;
	graph.resize(V);

	for (int i = 0; i < E; i++) {
		cin >> v1 >> v2;
		graph[v1-1].push_back(v2-1);
		graph[v1-1].push_back(v2-1);
		if (UF.isSameSet(v1-1, v2-1)) {
			tree = false;
		} else {
			UF.unionSet(v1-1, v2-1);
		}
	}

	if (tree) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}
