#include <string>
#include <iostream>

using namespace std;

int main() {
    int N;
    string a, b;

    bool flag = false;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        if (a.length() < b.length()) {
            cout << "nao encaixa" << endl;
        } else {
            flag = true;

            for (int j = 0; j < b.length(); j++) {
                if (a[a.length()-1-j] != b[b.length()-1-j]) {
                    cout << "nao encaixa" << endl;
                    flag = false;
                    break;
                } 
            }

            if (flag) {
                cout << "encaixa" << endl;
            }

        }
    }

    return 0;
}