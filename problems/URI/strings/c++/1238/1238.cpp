#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    int size;
    unsigned int k = 0;
    unsigned int l = 0;
    
    string a, b;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a >> b;

        size = a.length() + b.length();

        for (int j = 0; j < size; j++) {
            if (k < a.length() && l < b.length()) {
                if (j % 2 == 0) {
                    cout << a[k++];
                } else {
                    cout << b[l++];
                }
            } else {
                if (a.length() > b.length()) {
                    cout << a[k++];
                } else {
                    cout << b[l++];
                }
            }

        }

        cout << endl;
        k = 0;
        l = 0;
    }

    return 0;
}