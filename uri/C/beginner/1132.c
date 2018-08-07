/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1132
 *
 */

#include <stdio.h>

int main() {
    int a, b, aux, sum;

    scanf("%d", &a);
    scanf("%d", &b);

    if(a > b) {
        aux = b;
        b = a;
        a = aux;

    }

    sum = 0;

    while(a <= b) {
        if(a % 13 != 0) {
            sum += a;
        }

        a++;
    }

    printf("%d\n", sum);

    return 0;
}
