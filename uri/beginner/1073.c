/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1073
 *
 */

#include <stdio.h>

int main() {
    int i, n;

    scanf("%d", &n);

    if(n >= 2) {
        for(i = 2; i <= n; i += 2) {
            printf("%d^2 = %d\n", i, i * i);
        }
    }

    return 0;
}
