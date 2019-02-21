/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1173
 *
 */

#include <stdio.h>
#include <math.h>

int main() {
    int n[10], a, i;

    scanf("%d", &a);

    for(i = 0; i < 10; i++) {
        n[i] = a * pow(2, i);
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}
