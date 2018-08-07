/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1011
 *
 */

#include <stdio.h>

int main() {
    double pi, radius, volume;

    pi = 3.14159;

    scanf("%lf", &radius);

    volume = (4.0/3) * pi * radius * radius * radius;

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
