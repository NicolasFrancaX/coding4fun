#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    int N;
    string text;
    bool flag;

    cin >> N;
    cin.ignore(100, '\n');

    while (N--) {
        getline(cin, text);

        flag = true;
       
        for (unsigned int i = 0; i < text.length(); i++) {
            if (isalpha(text[i])) {
                if (flag) {
                    cout << text[i];
                    flag = false;
                }
            } else if (text[i] == ' ') {
                flag = true;
            }
        }

        cout << endl;
    }

    return 0;
}