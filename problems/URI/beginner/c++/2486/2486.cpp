#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl;

using namespace std;

void treatment(string line, int *n, string & food) {
    string number = "";

    for (auto it = line.begin(); it != line.end(); it++)
        if (*it == ' ') break;
        else number.append(1u, *it);

    *n = stoi(number);

    stringstream ss(line);
    string aux;
    string aux_2;

    ss >> aux;
    ss >> aux;


    while (ss >> aux_2) {
        aux.append(1u, ' ');

        aux.append(aux_2);

    }

    food = aux;
}

int main() {
    map<string, int> amount_vitamin;

    amount_vitamin["suco de laranja"] = 120;
    amount_vitamin["morango fresco"] = 85;
    amount_vitamin["mamao"] = 85;
    amount_vitamin["goiaba vermelha"] = 70;
    amount_vitamin["manga"] = 56;
    amount_vitamin["laranja"] = 50;
    amount_vitamin["brocolis"] = 34;


    int T;
    int N;
    string line;
    string food;


    int total_vitamin;

    while (cin >> T && T) {
        total_vitamin = 0;

        cin.ignore(100, '\n');
        while (T--) {
            getline(cin, line);
            treatment(line, &N, food);

            total_vitamin = total_vitamin + N*amount_vitamin[food];
        }

        if (total_vitamin < 110) cout << "Mais " << 110-total_vitamin << " mg" << endl;
        else if (total_vitamin > 130) cout << "Menos " << total_vitamin-130 << " mg" << endl;
        else cout << total_vitamin << " mg" << endl;
    }

    return 0;
}