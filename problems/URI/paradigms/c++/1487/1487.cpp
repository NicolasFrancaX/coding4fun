#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl;

using namespace std;

class Brinquedo {
    public:
        int D, P;
        double div;

    Brinquedo(int D, int P) {
        this->D = D;
        this->P = P;
        this->div = (P+0.0)/D;
    }
};

int comp(Brinquedo b1, Brinquedo b2) {
    return b1.div > b2.div;
}

int sol(vector<Brinquedo> v, int M) {
    int tempo_total = 0;
    int ponto_total = 0;

    unsigned int i = 0;

    while (i < v.size()) {
        if (tempo_total+v[i].D <= M) {
            tempo_total += v[i].D;
            ponto_total += v[i].P;
        } else {
            i++;
        }
    }

    return ponto_total;
}

int main() {
    int N, M;
    int D, P;

    int inst = 1;

    while (cin >> N >> M && N+M) {
        vector<Brinquedo> v_b;
        
        for (int i = 0; i < N; i++) {
            cin >> D >> P;

            Brinquedo b(D, P);

            v_b.push_back(b);
        }

        sort(v_b.begin(), v_b.end(), comp);

        cout << "Instancia " << inst++ << endl;
        cout << sol(v_b, M) << endl << endl;

        v_b.clear();
    }

    return 0;
}