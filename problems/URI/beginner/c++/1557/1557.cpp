#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int N;

    long long int greatest;
    int algs;

    int presentation;
    while (cin >> N && N) {
        greatest = (int)pow(2, 2*(N-1));
        algs = to_string(greatest).length();

        for (int i = 0; i < N; i++) {
            presentation = 0;
            for (int j = 0; j < N; j++) {
                if (presentation++ == 0) {
                    cout << setw(algs) << (int)pow(2, i+j);
                } else {
                    cout << " " << setw(algs) << (int)pow(2, i+j);
                }
            }

            cout << endl;
        }

        cout << endl;
    }

    return 0;
}