/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1007
 *
 */

#include <stdio.h>

int main() {
    int A, B, C, D, DIFERENCA;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    DIFERENCA = (A * B) - (C * D);
    printf("DIFERENCA = %d\n", DIFERENCA);
}
