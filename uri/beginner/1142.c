/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1142
 *
 */

#include <stdio.h>

int main() {
    int a, n, i;

    n = 1;
    i = 0;

    scanf("%d", &a);

    while(i < a) {
        printf("%d %d %d PUM\n", n, (n + 1), (n + 2));

        n += 4;
        i++;
    }

    return 0;
}
