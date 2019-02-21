/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1145
 *
 */

#include <stdio.h>

int main() {
    int columns, final, i = 1, aux;

    scanf("%d %d", &columns, &final);

    while(i <= final) {
        aux = 1;
        while(aux != columns && i <= final) {
            printf("%d ", i);
            i++;
            aux++;

            if(i > final) {
                printf("\n");
            }
        }

        if(aux == columns && i <= final) {
            printf("%d\n", i);
            i++;
        }
    }

    return 0;
}
