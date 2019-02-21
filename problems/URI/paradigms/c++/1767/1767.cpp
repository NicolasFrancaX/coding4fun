#include <bits/stdc++.h>

using namespace std;

int max(int a, int b) {
    if (a > b) return a;
    return b;
}

int main() {
    int T;
    int Pac;
    int qt, weight;
    vector<pair<int, int> > items;

    cin >> T;

    while (T--) {

        cin >> Pac;
        items.clear();

        items.push_back(make_pair(0, 0));

        for (int i = 1; i <= Pac; i++) {
            cin >> qt >> weight;
            items.push_back(make_pair(qt, weight));
        }

        const int max_weight = 50;
        
        int m[Pac+1][max_weight+1];
        int p[Pac+1][max_weight+1];
        int k[Pac+1][max_weight+1];

        memset(p, 0, sizeof(p[0][0])*(Pac+1)*(max_weight+1));

        m[0][0] = 0;

        for (int i = 0; i <= Pac; i++) {
            for (int j = 0; j <= max_weight; j++) {
                if (i == 0 || j == 0) {
                    m[i][j] = 0;
                    p[i][j] = 0;
                    k[i][j] = 0;
                } else if ((items.begin()+i)->second <= j) {
                    m[i][j] = max(m[i-1][j], m[i-1][j-(items.begin() + i)->second] + (items.begin()+i)->first);
                    if (m[i][j] == m[i-1][j-(items.begin() + i)->second] + (items.begin()+i)->first) {
                        p[i][j] = p[i-1][j-(items.begin()+i)->second] + 1;
                        k[i][j] = k[i-1][j-(items.begin()+i)->second] + (items.begin()+i)->second;
                    } else {
                        p[i][j] = p[i-1][j];
                        k[i][j] = k[i-1][j];
                    }
                } else {
                    m[i][j] = m[i-1][j];
                    p[i][j] = p[i-1][j];
                    k[i][j] = k[i-1][j];
                }
            }
        }

        cout << m[Pac][max_weight] << " brinquedos" << endl;
        cout << "Peso: " << k[Pac][max_weight] << " kg" << endl;
        cout << "sobra(m) " << Pac - p[Pac][max_weight] << " pacote(s)" << endl;
        cout << endl;
    }

    return 0;
}