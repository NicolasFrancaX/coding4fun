#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cctype>

using namespace std;

int main() {
    string text;
    string aux;
    string aux2;
    bool alliteration;
    int number_alliteration;

    while (getline(cin, text)) {
        vector<string> v;
        stringstream ss(text);
        number_alliteration = 0;
        alliteration = false;

        while (ss >> aux) {
            v.push_back(aux);
        }

        aux2 = v[0];

        for (auto it = v.begin()+1; it != v.end(); it++) {
            if (tolower((*it)[0]) == tolower(aux2[0])) {
                if (!alliteration) {
                    alliteration = true;
                    number_alliteration++;
                }
            } else {
                alliteration = false;
            }

            aux2 = *it;
        }

        cout << number_alliteration << endl;
    }

    return 0;
}