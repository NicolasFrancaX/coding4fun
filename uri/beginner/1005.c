/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1005
 *
 */

#include <stdio.h>

int main() {
    float A, B;
    double MEDIA;

    scanf("%f", &A);
    scanf("%f", &B);

    MEDIA = ((0.35 * A) + (0.75 * B)) / 1.1;
    printf("MEDIA = %.5lf\n", MEDIA);
}
