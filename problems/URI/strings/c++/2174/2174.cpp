#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl;

using namespace std;

int main() {
    const int Pomekon = 151;
    set<string> s;
    string text;

    int N;

    cin >> N;

    while (N--) {
        cin >> text;

        transform(text.begin(), text.end(), text.begin(), ::toupper);        
        s.insert(text);
    }

    cout << "Falta(m) " << Pomekon - s.size() << " pomekon(s)." << endl;

    return 0;
}