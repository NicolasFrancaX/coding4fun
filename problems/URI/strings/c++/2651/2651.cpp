#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl

using namespace std;

int main() {
    string z;

    cin >> z;

    string zelda = "zelda";

    /* Aux */
    string z_l = z;

    /* Booleans */
    bool tranq = true;

    /* Inter... */
    unsigned int k;

    transform(z_l.begin(), z_l.end(), z_l.begin(), ::tolower);

    for (unsigned int i = 0; i < z_l.length(); i++) {
        if (z_l[i] == zelda[0]) {
            k = 0;

            for (unsigned int j = i; j < i+zelda.length() && j < z_l.length(); j++) {
                if (z_l[j] == zelda[k]) {
                    tranq = false;
                    k++;
                } else {
                    tranq = true;
                    break;
                }
            }

            if (!tranq) break;
        }
    }

    if (tranq || k != zelda.length()) {
        cout << "Link Tranquilo" << endl;
    } else {
        cout << "Link Bolado" << endl;
    }

    return 0;
}