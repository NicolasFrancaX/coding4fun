#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int N;
    string ops;

    int state;

    /* Controle */
    map<int, int> esquerda;
    map<int, int> direita;
    map<int, char> localizacao;

    esquerda[0] = 1;
    esquerda[1] = 2;
    esquerda[2] = 3;
    esquerda[3] = 0;

    direita[0] = 3;
    direita[1] = 0;
    direita[2] = 1;
    direita[3] = 2;

    localizacao[0] = 'N';
    localizacao[1] = 'O';
    localizacao[2] = 'S';
    localizacao[3] = 'L';

    while (cin >> N && N) {
        state = 0;

        cin >> ops;

        for (auto s = ops.begin(); s != ops.end(); s++) {
            if (*s == 'D') {
                state = direita[state];
            } else if (*s == 'E') {
                state = esquerda[state];
            }
        }

        cout << localizacao[state] << endl;
    }

    return 0;
}