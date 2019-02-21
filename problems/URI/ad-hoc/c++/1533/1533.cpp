#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl

using namespace std;

int comp(pair<int, int> a, pair<int, int> b) {
    if (a.first < b.first) {
        return 0;
    }
    return 1;
}

int main() {
    int N;
    
    int aux;
    int index;

    while (cin >> N && N) {
        vector<pair<int, int>> v_p;
        index = 0;

        while (N--) {
            cin >> aux;
            index++;

            v_p.push_back(make_pair(aux, index));
        }

        sort(v_p.begin(), v_p.end(), comp);

        cout << v_p[1].second << endl;

        v_p.clear();

    }

    return 0;
}