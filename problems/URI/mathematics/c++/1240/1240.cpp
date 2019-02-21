#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    string a, b;
    
    cin >> T;

    while (T--) {
        cin >> a >> b;

        if (b.length() > a.length()) {
            cout << "nao encaixa" << endl;
        } else if (a.substr(a.length() - b.length()) == b) {
            cout << "encaixa" << endl;
        } else {
            cout << "nao encaixa" << endl;
        }

    }

    return 0;
}