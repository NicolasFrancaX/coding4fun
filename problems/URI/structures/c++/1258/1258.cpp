#include <iostream>
#include <string>
#include <set>
#include <map>

using namespace std;

int main() {
    int N;
    string nome, roupa, tamanho;
    int pos = 0;

    while (cin >> N && N != 0) {
        map<string, map<string, multiset<string>>> s;

        cin.ignore(100, '\n');

        while (N--) {
            string aux;

            getline(cin, nome);
            cin >> roupa >> tamanho;
            cin.ignore(100, '\n');

            aux.append(roupa);
            aux.append(1u, ' ');
            aux.append(tamanho);
            aux.append(1u, ' ');
            aux.append(nome);

            s[roupa][tamanho].insert(aux);
        }

        if (pos++ != 0) {
            cout << endl;
        }

        for (set<string>::iterator it = s["branco"]["P"].begin(); it != s["branco"]["P"].end(); it++) {
            cout << *it << endl;
        }

        for (set<string>::iterator it = s["branco"]["M"].begin(); it != s["branco"]["M"].end(); it++) {
            cout << *it << endl;
        }

        for (set<string>::iterator it = s["branco"]["G"].begin(); it != s["branco"]["G"].end(); it++) {
            cout << *it << endl;
        }


        for (set<string>::iterator it = s["vermelho"]["P"].begin(); it != s["vermelho"]["P"].end(); it++) {
            cout << *it << endl;
        }

        for (set<string>::iterator it = s["vermelho"]["M"].begin(); it != s["vermelho"]["M"].end(); it++) {
            cout << *it << endl;
        }

        for (set<string>::iterator it = s["vermelho"]["G"].begin(); it != s["vermelho"]["G"].end(); it++) {
            cout << *it << endl;
        }
    }

    return 0;
}