#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <set>

using namespace std;

int main() {
    int T;
    int M, N;
    string w1, w2;
    string s;
    string aux;
    int p;

    cin >> T;

    while (T--) {
        map<string, string> m;
        set<string> se;
        cin >> M >> N;


        cin.ignore(100, '\n');
        for (int i = 0; i < M; i++) {
            getline(cin, w1);
            getline(cin, w2);

            m[w1] = w2;
            se.insert(w1);
        }

        for (int i = 0; i < N; i++) {
            p = 0;
            getline(cin, s);
            stringstream ss(s);

            while (ss >> aux) {
                set<string>::iterator it = se.find(aux);

                if (p++ == 0) {
                    if (it != se.end()) {
                        cout << m[aux];
                    } else {
                        cout << aux;
                    }
                } else {
                    if (it != se.end()) {
                        cout << " " << m[aux];
                    } else {
                        cout << " " << aux;
                    }
                }
            }

            cout << endl;
        }

        cout << endl;
    }

    return 0;
}