#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main() {
    int N;
    string binary;

    while (cin >> N) {
        while (N--) {
            cin >> binary;

            bitset<8> c(binary);
            cout << (char)c.to_ulong();
        }
        

        cout << endl;
    }

    return 0;
}