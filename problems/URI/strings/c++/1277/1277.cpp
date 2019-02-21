#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int T;
    int N;
    int pos;
    int ap;
    
    string text;
    string list;

    int present;
    int aulas;

    double perc;

    cin >> T;

    while (T--) {
        vector<string> v;
        pos = 0;
        ap = 0;


        cin >> N;

        for (int i = 0; i < N; i++) {
            cin >> text;
            v.push_back(text);
        }

        for (int i = 0; i < N; i++) {
            present = 0;
            aulas = 0;

            cin >> list;

            for (unsigned int j = 0; j < list.length(); j++) {
                if (list[j] == 'P') {
                    present++;
                    aulas++;
                } else if (list[j] == 'A') {
                    aulas++;
                }
            }


            perc = (present*100)/aulas;

            if (perc < 75) {
                if (ap++ == 0) {
                    cout << v[pos];
                } else {
                    cout << " " << v[pos];
                }
            }

            pos++;
        }
        
        cout << endl;
    }
}