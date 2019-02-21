#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int N, M;
    int A, B;
    int x, y;
    int a;

    while (cin >> N >> M) {
        if (N == 0 && M == 0) return 0;

        a = N;

        vector<string> v;
        
        string text;
        while (N--) {
            cin >> text;

            v.push_back(text);
        }

        cin >> A >> B;

        x = A/a;
        y = B/M; 

        for (int j = 0; j < a; j++) {
            for (int w = 0; w < x; w++) {
                for (int i = 0; i < M; i++) {
                    for (int k = 0; k < y; k++) {
                        cout << v[j][i];
                    }
                }

                cout << endl;
            }
        }

        cout << endl;

    }        

}
        