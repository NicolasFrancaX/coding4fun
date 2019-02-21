/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1098
 *
 */

#include <stdio.h>

int main() {
    double n, aux;

    n = 0;


    while(n <= 10) {
        aux = n * 0.2;

        if(aux == (int)aux) {
            printf("I=%d J=%d\nI=%d J=%d\nI=%d J=%d\n",
            (int)aux, (int)(1 + aux), (int)aux, (int)(2 + aux), (int)aux, (int)(3 + aux));
        } else {
            printf("I=%.1lf J=%.1lf\nI=%.1lf J=%.1lf\nI=%.1lf J=%.1lf\n",
            aux, 1 + aux, aux, 2 + aux, aux, 3 + aux);
        }

        n++;
    }

    return 0;
}
