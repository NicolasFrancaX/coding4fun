#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string with_zeros(string n) {
    string s;
    int a = 10 - n.length();

    for (int i = 0; i < a; i++) {
        s.append(1u, '0');
    }

    s.append(n);

    return s;
}

int carry_operations(string a, string b) {
    int c = 0;
    int conter = 0;
    int aux;

    auto it = a.rbegin();
    auto ut = b.rbegin();

    while (it != a.rend()) {
        aux = (*it-'0')+(*ut-'0')+c;

        if (aux >= 10) {
            c = 1; 
            conter++;
        } else {
            c = 0;
        }

        ut++;
        it++;
    }

    return conter;
}

int main() {
    string a, b;
    int op;

    while (cin >> a >> b) {
        if (a == "0" && b == "0") return 0;

        a = with_zeros(a);
        b = with_zeros(b);

        op = carry_operations(a, b);

        if (op == 0) {
            cout << "No carry operation." << endl;
        } else if (op == 1) {
            cout << "1 carry operation." << endl;
        } else {
            cout << op << " carry operations." << endl;
        }

    }
}