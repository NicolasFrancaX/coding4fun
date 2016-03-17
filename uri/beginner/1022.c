/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1035
 *
 */

#include <stdio.h>
typedef int bool;
enum { false, true };

int main() {
    int a, b, c, d;
    bool value;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    value = (b > c) && (d > a) && (c + d > a + b) && (c > 0) && (d > 0) && (a % 2 == 0);

    if (value) {
        printf("Valores aceitos\n");
    } else {
         printf("Valores nao aceitos\n");
    }
}
