#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int NC;
    int N;
    int pos;

    cin >> NC;

    while (NC--) {
        pos = 0;

        cin >> N;
        vector<int> v(N);

        for (int i = 0; i < N; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        for (unsigned int i = 0; i < v.size(); i++) {
            if (pos++ == 0) {
                cout << v[i];
            } else {
                cout << " " << v[i];
            }
        }

        cout << endl;
    }

    return 0;
}