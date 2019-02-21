#include <iostream>
#include <iomanip>

using namespace std;

#define debug(x) cout << #x << " = " << x << endl

int main() {
    string name;
    int distance;
    double average_distance;

    int sum_distances = 0;
    int n = 0;

    while (getline(cin, name)) {
        cin >> distance;
        cin.ignore(100, '\n');
        sum_distances += distance;
        n++;
    }

    average_distance = (sum_distances+0.0)/n;

    cout << fixed << setprecision(1) << average_distance << endl;

    return 0;
}