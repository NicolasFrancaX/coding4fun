/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1178
 *
 */

#include <stdio.h>
#include <math.h>

int main() {
    double x, n[100];
    int i;

    scanf("%lf", &x);

    for(i = 0; i < 100; i++) {
        n[i] = (x + 0.0) / pow(2, i);

        printf("N[%d] = %.4lf\n", i, n[i]);
    }

    return 0;
}
