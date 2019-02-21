#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> values;
    set<int> s;

    int A, B, C;

    cin >> A >> B >> C;

    values.push_back(A); values.push_back(B); values.push_back(C);
    s.insert(A); s.insert(B); s.insert(C);

    sort(values.begin(), values.end());

    A = values.at(0); B = values.at(1); C = values.at(2);

    // Verifica se é um triângulo válido:
    if (A+B <= C) {
        cout << "Invalido" << endl;
    } else {
        if (s.size() == 1) cout << "Valido-Equilatero" << endl;
        else if (s.size() == 2) cout << "Valido-Isoceles" << endl;
        else cout << "Valido-Escaleno" << endl;

        cout << "Retangulo: ";

        if (pow(A, 2)+pow(B, 2) == pow(C, 2)) cout << "S" << endl;
        else cout << "N" << endl;
    }

    return 0;
}