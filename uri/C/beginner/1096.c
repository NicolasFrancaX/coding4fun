/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1096
 *
 */

#include <stdio.h>

int main() {
    int i;

    for(i = 1; i <= 9; i += 2) {
        printf("I=%d J=7\nI=%d J=6\nI=%d J=5\n", i, i, i);
    }

    return 0;
}
