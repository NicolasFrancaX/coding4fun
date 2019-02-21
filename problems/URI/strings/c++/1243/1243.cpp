#include <iostream>
#include <string>
#include <cctype>
#include <sstream>

using namespace std;

bool is_word(string symbol) {
    int ponts = 0;
    
    if (symbol.length() == 1 && symbol[0] == '.') return false;

    for (auto it = symbol.begin(); it != symbol.end(); it++) {
        if (isdigit(*it)) return false;

        if (*it == '.') {
            ponts++;
        }

    }

    if (ponts >= 2) return false;
    
    if (ponts == 0) return true;

    string::iterator f = symbol.end();
    f--;

    if (ponts == 1 && *f != '.') return false;

    if (ponts == 1 && *f == '.') return true;

    return true;
}

int main() {
    string text;
    string aux;
    int number_letters;
    int number_words;

    while (getline(cin, text)) {
        stringstream ss(text);

        number_words = 0;
        number_letters = 0;


        while (ss >> aux) {
            if (is_word(aux)) {
                if (*(aux.end()-1) == '.') {
                    number_letters += aux.length() - 1;
                } else {
                    number_letters += aux.length();
                }
                number_words++;
            }
        }

        if (number_words == 0) {
            cout << 250 << endl;
        } else if (number_letters/number_words >= 6) {
            cout << 1000 << endl;
        } else if (number_letters/number_words == 4 || number_letters/number_words == 5) {
            cout << 500 << endl;
        } else {
            cout << 250 << endl;
        }
    }

    return 0;
}