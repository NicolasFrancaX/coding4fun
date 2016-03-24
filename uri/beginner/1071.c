/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1071
 *
 */

#include <stdio.h>

int main() {
    int a, b, aux, sum;

    sum = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    if(a > b) {
        aux = b;
        b = a;
        a = aux;
    }

    if(a % 2 == 0) {
        a++;
    } else {
        a += 2;
    }

    for(; a < b; a += 2) {
        sum += a;
    }

    printf("%d\n", sum);
}
