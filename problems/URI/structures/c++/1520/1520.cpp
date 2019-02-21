#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    int a, b;
    int k;

    while (cin >> N) {
        vector<int> v;
        
        while (N--) {
            cin >> a >> b;

            for (int i = min(a, b); i <= max(a, b); i++) {
                v.push_back(i);
            }

        }


        sort(v.begin(), v.end());

        cin >> k;

        auto lower = lower_bound(v.begin(), v.end(), k);
        auto upper = upper_bound(v.begin(), v.end(), k);
        auto f = find(v.begin(), v.end(), k);


        if (f == v.end()) {
            cout << k << " not found" << endl;
        } else {
            cout << k << " found from " << (lower-v.begin()) << " to " << (upper-v.begin()-1) <<  endl;
        }


        v.clear();
    }
}