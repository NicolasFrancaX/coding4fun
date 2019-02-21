/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1164
 *
 */

#include <stdio.h>

int main() {
    int i = 1, j, r, n, sum;

    scanf("%d", &r);

    do {
        j = 1;
        sum = 0;

        scanf("%d", &n);

        while(j < n) {
            if(n % j == 0) {
                sum += j;
            }

            j++;
        }

        if(sum == n) {
            printf("%d eh perfeito\n", n);
        } else {
            printf("%d nao eh perfeito\n", n);
        }

        i++;
    } while(i <= r);

    return 0;
}
