/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1176
 *
 */

#include <stdio.h>

int main() {
    int m, n, i, j;
    double fib[60];

    scanf("%d", &m);

    for(i = 0; i < m; i++) {
        scanf("%d", &n);

        fib[n] = 0;

        for(j = 0; j <= n; j++) {
            if(j == 0) {
                fib[j] = 0;
            } else if(j == 1) {
                fib[j] = 1;
            } else {
                fib[j] = fib[j - 1] + fib[j - 2];
            }
        }

        printf("Fib(%d) = %0.lf\n", n, fib[n]);
    }

    return 0;
}
