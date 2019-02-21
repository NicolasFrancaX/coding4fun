/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1078
 *
 */

#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, n, i * n);
    }

    return 0;
}
