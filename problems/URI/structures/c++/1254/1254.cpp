#include <iostream>
#include <string>
#include <boost/algorithm/string.hpp>

using namespace std;

int main() {
    string tag;
    string v;
    string line;
    
    string aux;

    bool on = false;

    while (getline(cin, tag)) {
        getline(cin, v);
        
        getline(cin, line);

        int i = 0;
        int c;
        int end = line.length();

        while (i < end) {
            if (line[i] == '<') {
                on = true;
            } 

            if (on) {
                aux = "";
                for (int j = i; line[j] != '>' && j < end; j++) {
                    aux.append(1u, line[j]);
                    c = j;
                }

                boost::ireplace_all(aux, tag, v);

                cout << aux;
                
                on = false;
                i = c;
            } else {
                cout << line[i];
            }

            i++;
        }

        cout << endl;
    }

    return 0;
}