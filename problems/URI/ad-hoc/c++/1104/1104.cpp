#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

int min(int a, int b) {
    if (a < b) return a;
    return b;
}

int main() {
    int A, B;
    int aux;

    while (cin >> A >> B && A+B) {
        set<int> sa;
        set<int> sb;

        vector<int> va;
        vector<int> vb;

        vector<int> diff_sa;
        vector<int> diff_sb;

        while (A--) {
            cin >> aux;
            sa.insert(aux);
        }

        while (B--) {
            cin >> aux;
            sb.insert(aux);
        }

        for (auto it = sa.begin(); it != sa.end(); it++) {
            va.push_back(*it);
        }

        for (auto it = sb.begin(); it != sb.end(); it++) {
            vb.push_back(*it);
        }

        set_difference(va.begin(), va.end(), vb.begin(), vb.end(), inserter(diff_sa, diff_sa.begin()));

        set_difference(vb.begin(), vb.end(), va.begin(), va.end(), inserter(diff_sb, diff_sb.begin()));

        cout << min(diff_sa.size(), diff_sb.size()) << endl;
    }

    return 0;
}