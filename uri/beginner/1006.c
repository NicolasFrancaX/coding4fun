/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1006
 *
 */

#include <stdio.h>

int main() {
    double A, B, C, MEDIA;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    MEDIA = (0.2 * A) + (0.3 * B) + (0.5 * C);
    printf("MEDIA = %.1lf\n", MEDIA);

    return 0;
}
