#include <iostream>
#include <iomanip>
#include <map>
#include <string>

using namespace std;


int main() {
    int N, M, P;
    double price;
    int qtd;

    string word;

    cin >> N;

    while (N--) {
        double sum = 0;

        map<string, double> m;

        cin >> M;

        while (M--) {
            cin >> word >> price;

            m[word] = price;
        }

        cin >> P;

        while (P--) {
            cin >> word >> qtd;

            sum += m[word]*qtd;
        }

        cout << "R$ " << setprecision(2) << fixed << sum << endl;
    }

}