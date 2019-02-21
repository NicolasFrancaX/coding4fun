#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int N;
    int t;
    int aux;
    int pos;
    int count;

    cin >> N;

    while (N--) {
        pos = 0;
        count = 0;
        map<int, int> m1;
        map<int, int> m2;

        vector<int> v;
        cin >> t;

        while (t--) {
            cin >> aux;

            v.push_back(aux);
            m1[aux] = pos++;
        }

        sort(v.rbegin(), v.rend());

        for (unsigned int i = 0; i < v.size(); i++) {
            m2[v[i]] = i;

            if (m1[v[i]] == m2[v[i]]) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}