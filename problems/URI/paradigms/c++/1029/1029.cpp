#include <iostream>

using namespace std;

int num_calls;

int fib(int n) {
    num_calls++;
    //cout << n << endl;

    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return fib(n-1)+fib(n-2);
}

int main() {
    int N;
    int n;

    cin >> N;

    while (N--) {
        num_calls = 0;

        cin >> n;

        int f = fib(n);
        int x = f;
        int y = num_calls;

        cout << "fib(" << n << ") = " << y-1 << " calls = " << x << endl;
    }

    return 0;
}