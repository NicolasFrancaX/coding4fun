/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1047
 *
 */

#include <stdio.h>

int main() {
    int a, b, c, d, minutes_1, minutes_2, total, hours, minutes;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a > c) {
        minutes_2 = (24 * 60) + (c * 60) +  d;
        minutes_1 = (a * 60) + b;
    } else if(a * b == c * d) {
        minutes_2 = 24 * 60;
        minutes_1 = 0;
    } else {
         minutes_1 = (a * 60) + b;
         minutes_2 = (c * 60) + d;
    }

    total = minutes_2 - minutes_1;

    hours = (total - (total % 60)) / 60;
    minutes = total % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours, minutes);

    return 0;
}
