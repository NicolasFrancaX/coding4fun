/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1042
 *
 */

#include <stdio.h>

int main() {
    int i, j, x[3], input[3], aux;

    scanf("%d %d %d", &x[0], &x[1], &x[2]);

    input[0] = x[0];
    input[1] = x[1];
    input[2] = x[2];

    for(i = 0; i <= 3 ; i++) {
        for(j = 0; j < 2; j++) {
            if(x[j] > x[j + 1]) {
                aux = x[j + 1];
                x[j + 1] = x[j];
                x[j] = aux;
            }
        }
    }

    printf("%d\n%d\n%d\n\n", x[0], x[1], x[2]);
    printf("%d\n%d\n%d\n", input[0], input[1], input[2]);

    return 0;
}
