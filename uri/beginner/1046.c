/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1046
 *
 */

#include <stdio.h>

int main() {
    int a, b, hours;

    scanf("%d %d", &a, &b);

    if(a > b) {
        b += 24;
    } else if(a == b) {
        b = 24;
        a = 0;
    }

    hours = b - a;

    printf("O JOGO DUROU %d HORA(S)\n", hours);

    return 0;
}
