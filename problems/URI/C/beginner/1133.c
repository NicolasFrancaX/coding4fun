/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1133
 *
 */

#include <stdio.h>

int main() {
    int i, a, b, aux;

    scanf("%d %d", &a, &b);

    if(a > b) {
        aux = b;
        b = a;
        a = aux;
    }

    for(i = a + 1; i < b; i++) {
        if(i % 5 == 2 || i % 5 == 3) {
            printf("%d\n", i);
        }
    }

    return 0;
}
