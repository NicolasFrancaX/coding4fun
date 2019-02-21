#include <iostream>
#include <map>

using namespace std;

int main() {
    int N;
    int n;

    while (cin >> N && N != 0) {
        map<int, int> m;

        while (N--) {
            cin >> n;

            m[n]++;
        }

        cout << "Mary won " << m[0] << " times and John won " << m[1] << " times" << endl;
    }

    return 0;
}