#include <iostream>
#include <string>
#include <cctype>
  
using namespace std;

int main() {
    string expression;

    while (getline(cin, expression)) {
        for (int i = 0; i < expression.length(); i++) {
            if (isalpha(expression[i])) {
                int a = (int)expression[i];

                if (isupper(expression[i])) {
                    a += 13;
                    if ((int)'Z' < a) {
                        a = a - (int)'Z';
                        a += (int)'A' - 1;
                        //cout << (char)a;
                        cout << (char)a;
                    } else {
                        cout << (char)a;
                    }
                } else {
                    a += 13;
                    if ((int)'z' < a) {
                        a = a - (int)'z';
                        a += (int)'a' - 1;
                        //cout << (char)a;
                        cout << (char)a;
                    } else {
                        cout << (char)a;
                    }

                }

            } else {
                cout << expression[i];
            }
        }

        cout << endl;

    }

    return 0;
}