#include <iostream>
#include <string>
#include <map>
#include <set>
#include <cctype>
#include <algorithm>

using namespace std;

int main() {
    int N;
    string text;
    int greater;

    cin >> N;
    cin.ignore(100, '\n');

    while (N--) {
        map<char, int> m;
        map<int, set<char>> m1;
        char aux;

        getline(cin, text);
 
        greater = 0;

        for (unsigned int i = 0; i < text.length(); i++) {
            if (isalpha(text[i])) {
                aux = (char)tolower(text[i]);
                m[aux]++;
                
                if (greater < m[aux]) {
                    greater = m[aux];
                }

                m1[m[aux]].insert(aux);
            }
        }

        for (set<char>::iterator it = m1[greater].begin(); it != m1[greater].end(); it++) {
            cout << *it;
        }

        cout << endl;
    }

    return 0;
}