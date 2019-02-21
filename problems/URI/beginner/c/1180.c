/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1180
 *
 */

#include <stdio.h>

int main() {
    int a, i, aux, pos;

    scanf("%d", &a);

    int n[a];

    for(i = 0; i < a; i++) {
        scanf("%d", &n[i]);
    }


    aux = n[0];
    pos = 0;

    for(i = 1; i < a; i++) {
        if(aux > n[i]) {
            aux = n[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", aux, pos);

    return 0;
}
