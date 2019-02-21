/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1019
 *
 */

#include <stdio.h>

int main() {
    int value, aux, hours, minutes, seconds;

    scanf("%d", &value);

    aux = value;

    hours = (aux- (aux % 3600)) / 3600;
    aux = aux % 3600;

    minutes = (aux - (aux % 60)) / 60;

    seconds = aux % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
