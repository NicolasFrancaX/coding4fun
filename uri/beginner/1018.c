/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1018
 *
 */

#include <stdio.h>

int main() {
    int n, aux, n_100, n_50, n_20, n_10, n_5, n_2;

    scanf("%d", &n);

    aux = n;

    n_100 = 0.01 * (aux - (aux % 100));
    aux = aux % 100;

    n_50 = 0.02 * (aux - (aux % 50));
    aux = aux % 50;

    n_20 = 0.05 * (aux - (aux % 20));
    aux = aux % 20;

    n_10 = 0.1 * (aux - (aux % 10));
    aux = aux % 10;

    n_5 = 0.2 * (aux - (aux % 5));
    aux = aux % 5;

    n_2 = 0.5 * (aux - (aux % 2));

    aux = aux % 2;


    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",
            n, n_100, n_50, n_20, n_10, n_5, n_2, aux);

    return 0;
}
