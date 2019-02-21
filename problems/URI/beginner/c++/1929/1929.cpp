#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d;

    vector<int> v;

    cin >> a >> b >> c >> d;

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);

    sort(v.begin(), v.end());

    if (v.at(1)+v.at(2) > v.at(3) || v.at(0)+v.at(1) > v.at(2)) cout << "S" << endl;
    else cout << "N" << endl;

    return 0;
}