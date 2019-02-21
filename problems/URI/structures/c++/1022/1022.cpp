#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>

using namespace std;

int MDC(int a, int b) {
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int main() {
    int N;
    cin >> N;

    int a, b, c, d;
    int x, y;
    int mdc;
    char op;
    char barra;
    
    for (int i = 0; i < N; i++) {
        cin >> a >> barra >> b >> op >> c >> barra >> d;

        switch(op) {
            case '+':
                x = (a*d)+(c*b);
                y = b*d;
                break;
            case '-':
                x = (a*d)-(c*b);
                y = b*d;
                break;
            case '*':
                x = a*c;
                y = b*d;
                break;
            case '/':
                x = a*d;
                y = b*c;
                break;
        }

        mdc = MDC(x, y);

        if (mdc < 0) {
            cout << x << "/" << y << " = " << -(x / mdc) << "/" << -(y / mdc) << endl;
        } else {
            cout << x << "/" << y << " = " << x / mdc << "/" << y / mdc << endl;
        }
    }

}