/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1150
 *
 */

#include <stdio.h>

int main() {
    int x, sum = 0, z, n = 0, i;
    scanf("%d", &x);
    do {
        scanf("%d", &z);
    } while(z <= x);

    for(i = x; sum <= z; i++) {
        sum += x++;
        n++;
    }

    printf("%d\n", n);

    return 0;
}
