#include <bits/stdc++.h>

using namespace std;

int min_3(int a, int b, int c) {
    return min(a, min(b, c));
}

int main() {
    int A1, A2, A3;
    int time;

    cin >> A1 >> A2 >> A3;

    time = 2*min_3(A2+(2*A3), A1+A3, (2*A1)+A2);

    cout << time << endl;

    return 0;
}