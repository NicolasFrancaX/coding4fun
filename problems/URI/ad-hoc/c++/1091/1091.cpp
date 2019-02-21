#include <iostream>

using namespace std;

int main() {
    int K;
    int x, y;
    int q_x, q_y;

    while (cin >> K && K) {
        cin >> x >> y;

        for (int i = 0; i < K; i++) {
            cin >> q_x >> q_y;

            if (q_x == x || q_y == y) {
                cout << "divisa" << endl;
            } else {
                if (x > q_x) {
                    if (y > q_y) {
                        cout << "SO" << endl;
                    } else {
                        cout << "NO" << endl;
                    }
                } else {
                    if (y > q_y) {
                        cout << "SE" << endl;
                    } else {
                        cout << "NE" << endl;
                    }
                }
            }
        }
    }

    return 0;
}