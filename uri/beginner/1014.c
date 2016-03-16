/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1014
 *
 */

#include <stdio.h>

int main() {
    int x;
    float y, km_l;

    scanf("%d", &x);
    scanf("%f", &y);

    km_l = x / y;

    printf("%.3f km/l\n", km_l);
}
