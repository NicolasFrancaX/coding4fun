/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1151
 *
 */

#include <stdio.h>

int main() {
    int i = 1, n, fib_1, fib_2, fib, aux;

    scanf("%d", &n);

    while(i <= n) {
        if(i == 1) {
            fib_1 = 0;

            printf("%d ", fib_1);
        } else if(i == 2) {
            fib_2 = 1;

            printf("%d ", fib_2);
        } else if(i != n) {
            aux = fib_2;
            fib = fib_1 + fib_2;
            fib_1 = aux;
            fib_2 = fib;

            printf("%d ", fib);
        } else {
            fib = fib_1 + fib_2;

            printf("%d\n", fib);
        }

        i++;
    }


    return 0;

}
