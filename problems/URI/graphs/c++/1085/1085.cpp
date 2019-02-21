// NOT ACCEPTED

#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl;
#define INF INT_MAX

using namespace std;

int comp(pair<string, string> p1, pair<string, string> p2) {
    if (p1.second.length() < p2.second.length()) return 1;
    return 0;
}

class Graph
{
    private:

        map<string, vector<pair<string, string> > > adj;

    public:

        Graph() {}

        void add_edges(string s1, string s2, string common) {
            this->adj[s1].push_back({s2, common});
            this->adj[s2].push_back({s1, common});

            sort(this->adj[s1].begin(), this->adj[s1].end(), comp);
            sort(this->adj[s2].begin(), this->adj[s2].end(), comp);
        }

        int dijkstra(string orig, string dest) {
            map<string, bool> visitados;
            map<string, int> distancia;

            for (auto it = this->adj.begin(); it != this->adj.end(); it++) {
                distancia[it->first] = INF;
            }

            string same_first_letter = "0";

            priority_queue<pair<int, string> > pq;

            pq.push({0, orig});
            visitados[orig] = false;
            distancia[orig] = 0;

            while (!pq.empty()) {
                if (!visitados[pq.top().second]) {
                    string s = pq.top().second; pq.pop();
                    visitados[s] = true;

                    for (auto u : this->adj[s]) {
                        int dist_prox = u.second.length();
                        if (same_first_letter[0] != u.second[0]) {
                            if (!visitados[u.first]) {
                                if (distancia[u.first] > distancia[s]+dist_prox) {
                                    distancia[u.first] = distancia[s]+dist_prox;
                                    pq.push({-distancia[u.first], u.first});
                                    same_first_letter = u.second;
                                }
                            }
                        }
                    }

                } else {
                    pq.pop();
                }
            }

            if (!visitados[dest]) {
                return INF;
            }

            return distancia[dest];
        }
};

int main() {
    int N;
    string orig, dest;
    string s1, s2, common;

    int result;

    while (cin >> N && N) {
        cin >> orig >> dest;

        Graph g;
        
        for (int i = 0; i < N; i++) {
            cin >> s1 >> s2 >> common;
            g.add_edges(s1, s2, common);
        }

        result = g.dijkstra(orig, dest);

        if (result == INF) {
            cout << "impossivel" << endl;
        } else {
            cout << result << endl;
        }
    }

    return 0;
}