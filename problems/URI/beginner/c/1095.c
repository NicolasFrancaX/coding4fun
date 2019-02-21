/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1095
 *
 */

#include <stdio.h>

int main () {
    int n, i, j;

    i = -2;
    j = 65;

    for(; j != 0;) {
        i += 3;
        j -= 5;

        printf("I=%d J=%d\n", i, j);
    }

    return 0;
}
