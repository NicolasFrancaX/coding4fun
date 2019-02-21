#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string, int> m;

int main() {
    int M, N;
    int aux;
    int sum = 0;
    int period = 0;
    string word;

    cin >> N >> M;

    while (N--) {
        cin >> word >> aux;
        m[word] = aux;
    }

    while (period < M) {
        cin >> word;

        if (m[word]) {
            sum += m[word];
        }

        if (word[0] == '.') {
            period++;
            cout << sum << endl;
            sum = 0;
        }
    }

    return 0;

}