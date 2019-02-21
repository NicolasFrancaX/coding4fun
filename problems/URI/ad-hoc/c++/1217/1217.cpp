#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl;

using namespace std;

int main() {
    int T;
    double costs;
    string fruits;
    string fruit;

    int total_fruits = 0;
    double total_costs = 0;
    int actual_fruits;

    double average_kg;
    double average_cost;

    cin >> T;

    for (int i = 0; i < T; i++) {
        actual_fruits = 0;

        cin >> costs;

        total_costs += costs;

        cin.ignore(100, '\n');

        getline(cin, fruits);

        stringstream ss(fruits);

        while (ss >> fruit) {
            total_fruits++;
            actual_fruits++;
        }

        cout << "day " << i+1 << ": " << actual_fruits << " kg" << endl;
    }

    average_kg = (total_fruits+0.0)/T;
    average_cost = (total_costs+0.0)/T;

    cout << fixed << setprecision(2) << average_kg << " kg by day" << endl;
    cout << "R$ " << fixed << setprecision(2) << average_cost << " by day" << endl;

    return 0;
}