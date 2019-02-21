#include <iostream>
#include <sstream>
#include <map>
#include <string>
#include <cstring>

using namespace std;

double measure(string measure, map<char, double> m) {
    double a = 0;

    for (unsigned int i = 0; i < measure.length(); i++) {
        a += m[measure[i]];
    }

    return a;
}

/*
string change(string s) {
    string a = "";

    for (unsigned int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            a.append(' ');
        } else {
            a.append(s[i]);
        }
    }

    return a;
}
*/

int main() {
    map<char, double> m;

    m['W'] = (double)1;
    m['H'] = (double)1/2;
    m['Q'] = (double)1/4;
    m['E'] = (double)1/8;
    m['S'] = (double)1/16;
    m['T'] = (double)1/32;
    m['X'] = (double)1/64;

    char composition[300];
    char aux[300];
    int count;

    while (cin >> composition && composition[0] != '*') {
        count = 0;

        for (unsigned int i = 0; i < strlen(composition); i++) {
            if (composition[i] == '/') {
                aux[i] = ' ';
            } else {
                aux[i] = composition[i];
            }
        }

        aux[strlen(composition)] = '\0';

        string s(aux);
        stringstream ss(s);
        string aux;

        while (ss >> aux) {
            if (measure(aux, m) == 1) {
                count++;
            }
        }

        cout << count << endl;
    }
    
    return 0;
}