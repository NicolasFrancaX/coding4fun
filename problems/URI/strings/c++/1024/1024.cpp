#include <iostream>
#include <string>
#include <climits>
#include <cctype>
#include <cstring>

using namespace std;

int main() {
    int N;
    int c;
    string text;
    char reversed[1000];

    cin >> N;
    cin.ignore(INT_MAX, '\n');

    for (int i = 0; i < N; i++) {
        getline(cin, text);

        for (unsigned int j = 0; j < text.length(); j++) {
            if (isalpha(text[j])) {
                c = (int)text[j];
                c += 3;
                text[j] = (char)c;
            }
        }

        /* reverse */
        for (unsigned int j = 0; j < text.length(); j++) {
            reversed[j] = text[text.length() - 1 - j];
        }

        reversed[text.length()] = '\0';

        for (unsigned int j = strlen(reversed)/2; j < strlen(reversed); j++) {
            c = (int)reversed[j];
            c -= 1;
            reversed[j] = (char)c;
        }

        cout << reversed << endl;
    }

    return 0;
}