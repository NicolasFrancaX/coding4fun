/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1070
 *
 */

#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    if(n % 2 == 0) {
        n++;
    }

    for(i = n; i <= n + (2 * 5); i += 2) {
        printf("%d\n", i);
    }

    return 0;
}
