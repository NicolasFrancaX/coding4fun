#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n;

    while (cin >> n && n != 0) {
        queue<int> q;
        int k;
        bool b = true;

        for (int i = 1; i <= n; i++) {
            q.push(i);
        }

        cout << "Discarded cards: ";

        while (!q.empty()) {
            k = q.front();
            q.pop();


            if (!q.empty()) {
                q.push(q.front());
                q.pop();
            } else {
                break;
            }

            if (b) {
                cout << k;
                b = false;
            } else {
                cout << ", " << k;
            }
        }

        cout << endl;

        cout << "Remaining card: " << k << endl;

    }

    return 0;
}