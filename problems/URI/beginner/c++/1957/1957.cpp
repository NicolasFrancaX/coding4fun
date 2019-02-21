#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    ll a;
    stringstream ss;

    cin >> a;

    ss << hex << a;

    string s(ss.str());

    transform(s.begin(), s.end(), s.begin(), ::toupper);
    
    cout << s << endl;

    return 0;
}