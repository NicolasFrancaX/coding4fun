#include <iostream>
#include <vector>

using namespace std;

bool logic(vector<int> v) {
    for (auto it = v.begin(); it != v.end(); it++) {
        if (*it < 0) return false;
    }

    return true;
}

int main() {
    int B, N;
    int aux;
    int src, dest, amount;

    while (cin >> B >> N && B+N) {
        vector<int> v;

        for (int i = 0; i < B; i++) {
            cin >> aux;
            v.push_back(aux);
        }

        for (int i = 0; i < N; i++) {
            cin >> src >> dest >> amount;

            v[src-1] -= amount;
            v[dest-1] += amount;
        }

        if (logic(v)) {
            cout << "S" << endl;
        } else {
            cout << "N" << endl;
        }
    }

    return 0;
}