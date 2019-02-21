#include <iostream>

using namespace std;

int main() {
    int N;
    int A, B;
    int N_A, N_B;

    while (cin >> N && N) {
        N_A = 0;
        N_B = 0;

        while (N--) {
            cin >> A >> B;

            if (A > B) {
                N_A++;
            } else if (B > A) {
                N_B++;
            }
        }

        cout << N_A << " " << N_B << endl;
    }

    return 0;
}