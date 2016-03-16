/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1013
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, maior_ab, maior;

    scanf("%d %d %d", &a, &b, &c);

    maior_ab = 0.5 * (a + b + abs(a - b));
    maior = 0.5 * (maior_ab + c + abs(maior_ab - c));

    printf("%d eh o maior\n", maior);

    return 0;
}
