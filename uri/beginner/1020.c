/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1020
 *
 */

#include <stdio.h>

int main() {
    int age, aux, years, months, days;

    scanf("%d", &age);

    aux = age;

    years = (aux - (aux % 365)) / 365;
    aux = aux % 365;

    months = (aux - (aux % 30)) / 30;

    days = aux % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);

    return 0;
}
