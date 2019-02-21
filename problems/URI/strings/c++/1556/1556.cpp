#include <bits/stdc++.h>

using namespace std;

set<string> memo;

void insert_memo(string s) {
    if (s.length() == 1) {
        memo.insert(s);
        return;
    }

    if (!s.length()) {
        return;
    }

    if (memo.find(s) != memo.end())
        return;
        
    memo.insert(s);

    string aux;

    for (unsigned int i = 0; i < s.length(); i++) {
        aux = s;

        aux.erase(aux.begin()+i);
        insert_memo(aux);
    }
}

int main() {
    string t;

    /* Aux */
    string aux;

    while (cin >> t) {
        insert_memo(t);

        for (auto it = memo.begin(); it != memo.end(); it++)
            cout << *it << endl;

        memo.clear();
        cout << endl;
    }
}