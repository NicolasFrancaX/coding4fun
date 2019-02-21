#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;

    int N;

    cin >> N;

    int a = 1;
    int b = 1;
    int aux;

    if (N == 1) {
        cout << 1 << endl;
        return 0;
    } else if (N == 2) {
        cout << "1 1" << endl;
        return 0;
    }

    v.push_back(1);
    v.push_back(1);

    for (int i = 2; i < N; i++) {
        aux = b;
        b = b+a;
        a = aux;
        
        
        v.push_back(b);
    }

    int p = 0;
    for (auto it = v.rbegin(); it != v.rend(); it++) {
        if (p++ == 0) {
            cout << *it;
        } else {
            cout << " " << *it;
        }
    }

    cout << endl;

    return 0;
}