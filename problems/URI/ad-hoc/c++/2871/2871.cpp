#include <iostream>

using namespace std;

int main() {
    int M, N;
    int s, l;
    int aux;

    while (cin >> M >> N) {
        l = 0;
        s = 0;

        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                cin >> aux;

                l += aux;
            }
        }

        s = l/60;
        l = l % 60;

        cout << s << " saca(s) e " << l << " litro(s)" << endl;
    }

    return 0;
}