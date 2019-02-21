#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N, l;
    string text, aux;
    int diff;

    cin >> N;

    while (N--) {
        diff = 0;

        cin >> l;

        cin >> text;

        aux = text;

        sort(aux.begin(), aux.end());

        for (int i = 0; i < l; i++) {
            if (aux[i] != text[i]) {
                diff++;
            } 
            
            if (diff > 2) {
                break;
            }
        }

        if (diff <= 2) {
            cout << "There are the chance." << endl;
        } else {
            cout << "There aren't the chance." << endl;
        }
    }

    return 0;
}