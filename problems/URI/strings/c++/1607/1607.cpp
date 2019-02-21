#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    string s1, s2;
    int count;

    cin >> N;

    while (N--) {
        count = 0;

        cin >> s1 >> s2;

        int m = s1.length();

        for (int i = 0; i < m; i++) {
            int x = (int)s1[i];
            int y = (int)s2[i];
            count += abs(x-y); 
        }
        
        cout << count << endl;
    }

    return 0;
} 