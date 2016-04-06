/*
 * Aprendendo Força Bruta.
 *
 */

#include <stdio.h>

int main() {
    int valor, m, n, count = 0;
    int i;

    scanf("%d", &valor);
    scanf("%d %d", &m, &n);

    int a[m], b[n];

    for(i = 0; i < m; i++) {
        scanf("%d", &a[i]);

        if(a[i] == valor) {
            count++;
        }
    }

    for(i = 0; i < n; i++) {
         scanf("%d", &b[i]);

         if(b[i] == valor) {
            count++;
         }
    }

    ( count >= 2 ? printf("Sim.\n") : printf("Não.\n") );

    return 0;
}
