/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1153
 *
 */

#include <stdio.h>

int main() {
    int n, fatorial_n, i = 1;

    scanf("%d", &n);

    while(i <= n) {
        if(i == 1) {
            fatorial_n = 1;
        } else {
            fatorial_n *= i;
        }

        i++;
    }

    printf("%d\n", fatorial_n);

    return 0;
}
