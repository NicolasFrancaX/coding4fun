#include <iostream>
#include <set>
#include <map>

using namespace std;

int main() {
    int T;
    int n;

    map<int, int> m;
    set<int> s;

    cin >> T;

    while (T--) {
        cin >> n;
        s.insert(n);
        m[n]++;
    }

    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " aparece " << m[*it] << " vez(es)" << endl;
    }

    return 0;
}