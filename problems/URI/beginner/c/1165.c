/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1165
 *
 */

#include <stdio.h>

int main() {
    int r, i = 1, j, count, n;

    scanf("%d", &r);

    while(i <= r) {
        j = 1;
        count = 0;

        scanf("%d", &n);

        while(j <= n) {
            if(n % j == 0) {
                count++;
            }

            j++;
        }

        if(count == 2) {
            printf("%d eh primo\n", n);
        } else {
            printf("%d nao eh primo\n", n);
        }

        i++;
    }

    return 0;
}
