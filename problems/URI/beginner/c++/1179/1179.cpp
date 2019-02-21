#include <iostream>
#include <vector>

using namespace std;

int main() {
    int i_even = 0;
    int i_odd = 0;
    int number;

    vector<int> evens;
    vector<int> odds;

    int proximo;

    for (int i = 0; i < 15; i++) {
        cin >> number;

        if (number % 2 == 0) {
            if (i_even == 5) {
                for (int j = 0; j < evens.size(); j++) {
                    cout << "par[" << j << "] = " << evens[j] << endl;
                }

                i_even = 0;
                evens.clear();
            } 

            evens.push_back(number);
            i_even++;


        } else {
            if (i_odd == 5) {
                for (int j = 0; j < odds.size(); j++) {
                    cout << "impar[" << j << "] = " << odds[j] << endl;
                }

                i_odd = 0;
                odds.clear();
            }

            odds.push_back(number);
            i_odd++;
        }
    }

    for (int i = 0; i < i_odd; i++) {
        cout << "impar[" << i << "] = " << odds[i] << endl;
    }

    for (int i = 0; i < i_even; i++) {
        cout << "par[" << i << "] = " << evens[i] << endl;
    }

    return 0;
}