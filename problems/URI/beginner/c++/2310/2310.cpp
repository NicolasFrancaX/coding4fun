#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;

    string name;

    int S, B, A;
    int S1, B1, A1;

    int St, Bt, At;
    int S1t, B1t, A1t;

    St = Bt = At = S1t = B1t = A1t = 0;

    double points_services, points_blocks, points_attacks;

    cin >> N;

    while (N--) {
        cin >> name;
        cin >> S >> B >> A;

        St += S;
        Bt += B;
        At += A;

        cin >> S1 >> B1 >> A1;

        S1t += S1;
        B1t += B1;
        A1t += A1;
    }

    points_services = (S1t*100+0.0)/St;
    points_blocks = (B1t*100+0.0)/Bt;
    points_attacks = (A1t*100+0.0)/At;

    cout << "Pontos de Saque: " << fixed << setprecision(2) << points_services << " %." << endl;
    cout << "Pontos de Bloqueio: " << fixed << setprecision(2) << points_blocks << " %." << endl;
    cout << "Pontos de Ataque: " << fixed << setprecision(2) << points_attacks << " %." << endl;

    return 0;
}