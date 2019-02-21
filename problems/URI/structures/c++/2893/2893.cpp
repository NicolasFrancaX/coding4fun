#include <iostream>
#include <cmath>

using namespace std;

long long int f[(2*100000)+1];

int sum;

int min(int a, int b) {
    if (a > b) return a;
    return b;
}

long long int fibk(int k, int N) {
    if (N < 0) {
        return 0;
    }
    if (N == 0) {
        return 0;
    } 
    
    if (N <= k) {
        return f[N];
    }

    if (f[N] != -1) {
        return f[N];
    }


    
    if (N == k+1) {
        
        f[N] = (k*(k-1)/2)%1000007;

        return f[N];
    } 


    f[N] = (2*fibk(k, N-1)-(fibk(k, N-(k+1)) % 1000007));

    f[N] %= 1000007;

    if (f[N] < 0) {
        f[N] += 1000007;
    }

    return f[N];
}

int main() {
    int T;
    long long int k, N;

    cin >> T;

    while (T--) {
        cin >> k >> N;

        sum = 0;

        for (int i = 0; i <= N; i++) {
            f[i] = -1;
        }

        // f[0] = 0;
        for (int i = 1; i <= k; i++) {
            f[i] = (i-1) % 10000007;
            sum += (i-1);
            sum %= 1000007;
        }

        cout << fibk(k, N) << endl;
    }

    return 0;
}