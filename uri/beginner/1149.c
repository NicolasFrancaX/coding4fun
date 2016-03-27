/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1149
 *
 */

#include <stdio.h>

int main() {
    int a, b, sum = 0, i = 0;

    scanf("%d %d", &a, &b);

    while(b <= 0) {
        scanf("%d", &b);
    }

    do {
        sum += a + i;

        i++;
    } while(i < b);

    printf("%d\n", sum);

    return 0;
}
