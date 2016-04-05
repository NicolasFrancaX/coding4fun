/*
 * Aprendendo recursividade.
 *
 */

#include <stdio.h>

int a[100];

int menor(int indice) {
    if(indice == 0) {
        return a[indice];
    }

    int m = menor(indice - 1);

    if(a[indice] < m) {
        return a[indice];
    }

    return m;
}

int main() {
    int i;

    for(i = 0; i < 100; i++) {
        scanf("%d", &a[i]);

        menor(i);
    }

    printf("%d\n", menor(i));

    return 0;
}

