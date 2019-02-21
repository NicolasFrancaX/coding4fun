#include <iostream>
#include <iomanip>

#define debug(x) cout << #x << " = " << x << endl;

using namespace std;

int space(int n, int max) {
    if (n == max) {
        return 0;
    }

    int cont = 0;

    while (n <= max) {
        n += 2;
        cont++;
    }

    return cont;
}

int main() {
    int N;
    int n;
    int a;

    while (cin >> N) {
        a = 1;
        n = space(a, N);

        while (a <= N) {

            cout << setw(space(a, N));
            for (int i = 0; i < a; i++) {
                cout << "*";
            }

            cout << endl;
            a += 2;
        }

        cout << setw(n) << "*" << endl;
        cout << setw(n+1) << "***" << endl;
        cout << endl;
    }

}