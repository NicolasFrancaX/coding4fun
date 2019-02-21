#include <iostream>

using namespace std;

int main() {
    int N;
    int cont = 0;
    int aux;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> aux;

        if (aux == 1) {
            cont += 30;
        }
    }

    cout << cont << endl;
    
    return 0;
}