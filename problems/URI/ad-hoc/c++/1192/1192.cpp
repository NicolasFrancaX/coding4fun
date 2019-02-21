#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    int T;
    int result;
    char a[2];
    char b[2];

    string text;

    cin >> T;

    while (T--) {
        cin >> text;

        a[0] = text[0];
        a[1] = '\0';
        b[0] = text[2];
        b[1] = '\0';

        if (text[0] == text[2]) {
            result = atoi(a)*atoi(a);
        } else if (isupper(text[1])) {
            result = atoi(b)-atoi(a);
        } else if (islower(text[1])) {
            result = atoi(a)+atoi(b);
        }

        cout << result << endl;
    }

    return 0;
}