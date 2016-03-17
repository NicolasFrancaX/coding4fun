/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1017
 *
 */

#include <stdio.h>

int main() {
    int hours, speed;
    double liters, kms;

    scanf("%d", &hours);
    scanf("%d", &speed);

    kms = hours * speed;
    liters = kms / 12;

    printf("%.3lf\n", liters);

    return 0;
}
