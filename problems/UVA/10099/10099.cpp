#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef vector<vpii> vvpii;

int main() {
    /*

        Which flavor of graph?
        - Indirected; dijkstra reversed; 
            in which edge will be a pair of de next node and the weight

    */

    vvpii adj_list;

    int N, R;
    int C1, C2, P;
    
    while (cin >> N >> R && N+R) {
        // Setting graph.
        adj_list.resize(N);

        for (int i = 0; i < R; i++) {
            cin >> C1 >> C2 >> P;

            adj_list[C1-1].push_back(make_pair(C2-1, P));
            adj_list[C2-1].push_back(make_pair(C1-1, P));
        }

        // Lets make a Dijkstra reverse directly in main...

        // Seemens that this is a Max Flow problem. Lets copy the text and see the solution...

    }


    return 0;
}