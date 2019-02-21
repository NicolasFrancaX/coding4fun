#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string lingua, felicitacao;
    string nome;
    map<string, string> m;
    int pos = 0;

    int linguas, nomes;

    cin >> linguas;

    while (linguas--) {
        cin >> lingua;
        cin.ignore(100, '\n');
        getline(cin, felicitacao);
        m[lingua] = felicitacao;
    }

    cin >> nomes;

    while (nomes--) {
        if (pos++ != 0) {
            cout << endl;
        }
        cin.ignore(100, '\n');
        getline(cin, nome);
        cin >> lingua;

        cout << nome << endl;
        cout << m[lingua] << endl;
    }

    cout << endl;

    return 0;
}