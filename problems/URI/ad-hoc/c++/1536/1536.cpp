#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl

using namespace std;

int main() {
    int N;
    int g_1, g_2;
    int v_1, v_2;
    int s_1, s_2;

    char x;

    cin >> N;

    while (N--) {
        v_1 = 0;
        v_2 = 0;
        g_1 = 0;
        g_2 = 0;
        s_1 = 0;
        s_2 = 0;

        cin >> g_1 >> x >> g_2;
        s_1 = s_1 + g_1 - g_2;
        s_2 = s_2 + g_2 - g_1;

        if (g_1 > g_2) {
            v_1++;            
        } else if (g_1 < g_2) {
            v_2++;
        } 

        cin >> g_2 >> x >> g_1;

        if (g_1 > g_2) {
            v_1++;            
        } else if (g_1 < g_2) {
            v_2++;
        } 

        if (v_1 == v_2) {
            cout << "Penaltis" << endl;
        } else if (v_1 > v_2) {
            cout << "Time 1" << endl;
        } else {
            cout << "Time 2" << endl;
        }
    }

    return 0;
}