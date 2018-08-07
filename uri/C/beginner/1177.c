/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1177
 *
 */

#include <stdio.h>

int main() {
    int a, n[1000], i, j;

    scanf("%d", &a);

    for(i = 0; i < 1000;) {
        for(j = 0; j < a && i < 1000; j++) {
            n[i] = j;

            printf("N[%d] = %d\n", i, n[i]);

            i++;
        }
    }

    return 0;
}
