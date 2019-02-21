#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    int force;
    string person;

    cin >> T;

    while (T--) {
        cin >> person >> force;

        if (person == "Thor") {
            cout << "Y" << endl;
        } else {
            cout << "N" << endl;
        }
    }

    return 0;
}