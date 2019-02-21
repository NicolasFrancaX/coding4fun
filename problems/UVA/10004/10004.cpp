#include <bits/stdc++.h>

using namespace std;

class Graph
{
    public:
        int V;
        vector<int>* adj;
        int* neighbors;

        Graph(int V) {
            this->V = V;
            adj = new vector<int>[V];
            neighbors = new int[V];

            /* Inicializing color:

                3 colors:

                - Gray = -1;
                - Black = 1;
                - White = 0;
                */
        }


        bool bicolorabel();

        bool bfs(int start, int color) {
            bool visitings = new bool[this->V];

            queue<int> q;

            int v;
            int change-next-color = 1;
            int k = 0;
            int n_adjs;

            queue<int> n_adjs;

            q.push(start); 


            while (!q.empty()) {
                if (++k == change-next-color)
                v = q.top(); q.pop();

                for ()

            }
        }



};

int main() {


    return 0;
}