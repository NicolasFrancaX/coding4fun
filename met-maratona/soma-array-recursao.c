/*
 * Aprendendo recursividade.
 *
 */

#include <stdio.h>

int a[100];

int soma(int indice) {
    int s = ( indice == 0 ? a[indice] : soma(indice - 1) );

    s += a[indice];

    return s;
}

int main() {
    int i;

    for(i = 0; i < 100; i++) {
        scanf("%d", &a[i]);

        soma(i);
    }

    printf("%d\n", soma(i));

    return 0;
}
