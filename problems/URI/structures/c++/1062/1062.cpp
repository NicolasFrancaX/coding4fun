#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl;

using namespace std;

int main() {
    int N;
    int aux;
    int aux2;

    while (cin >> N && N) {
        while (cin >> aux && aux) {
            vector<int> v;
            v.push_back(aux);

            stack<int> A;
            stack<int> S;
            stack<int> B;


            for (int i = N; i > 0; i--) {
                A.push(i);
            }

            for (int i = 1; i < N; i++) {
                cin >> aux;

                v.push_back(aux);
            }

            int i = 0;
            int j;

            while (true) {
                j = i;

                if (!S.empty() && v[i] == S.top()) {
                    B.push(S.top());
                    aux2 = S.top();
                    S.pop();
                    i++;
                } else if (!A.empty() && v[i] == A.top()) {
                    B.push(A.top());
                    aux2 = A.top();
                    A.pop();
                    i++;
                } else {
                    if (!A.empty()) {
                    S.push(A.top());
                    aux2 = A.top();
                    A.pop();
                    }
                }

                /* Primeira condição pra sair do loop */
                if (i == N) {
                    cout << "Yes" << endl;
                    break;
                }

                if (A.empty() && aux2 != v[j]) {
                    cout << "No" << endl;
                    break;
                }
            }
        } 

        cout << endl;
    }

    return 0;
}