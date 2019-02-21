#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int N;

    cin >> N;
    cin.ignore();
    for (int i = 0; i < N; i++) {
        string diet, breakfast, lunch;
        vector<char> v;
        map<char, int> m;
        bool cheat = false;

        getline(cin, diet);

        for (unsigned int j = 0; j < diet.length(); j++) {
            if (!m[diet[j]]) {
                m[diet[j]] = 1;
            }
        }

        getline(cin, breakfast);
        for (unsigned int j = 0; j < breakfast.length(); j++) {
            if (m[breakfast[j]] >= 1) {
                m[breakfast[j]]++;
            } 
            
            if (m[breakfast[j]] > 2) {
                cheat = true;
            } 
            
            if (!m[breakfast[j]]) {
                cheat = true;
            }
        }
        getline(cin, lunch);
        for (unsigned int j = 0; j < lunch.length(); j++) {
            if (m[lunch[j]] >= 1) {
                m[lunch[j]]++;
            } 
            
            if (m[lunch[j]] > 2) {
                cheat = true;
            } 

            if (!m[lunch[j]]) {
                cheat = true;
            }
        }

        if (cheat) {
            cout << "CHEATER" << endl;
            continue;
        }

        for (unsigned int j = 0; j < diet.length(); j++) {
            if (m[diet[j]] == 1) {
                v.push_back(diet[j]);
            }
        }

        sort(v.begin(), v.end());

        for (unsigned int j = 0; j < v.size(); j++) {
            cout << v[j];
        }

        cout << endl;

    }

    return 0;
}