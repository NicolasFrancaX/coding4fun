#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>

using namespace std;

void tratamento(string c) {
    for (unsigned int i = 0; i < c.length(); i++) {
        if (c[i] != '0') {
            cout << c[i];
        }
    }

    cout << endl;
}

int main() {
    long int a, b;
    long int c;

    while (cin >> a >> b && (a != 0 || b != 0)) {
        c = a + b;

        string s = to_string(c);
        
        tratamento(s);

    }
}