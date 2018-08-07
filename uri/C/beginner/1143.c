/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1143
 *
 */

#include <stdio.h>

int main() {
    int lines, s = 1;

    scanf("%d", &lines);

    while(s <= lines) {
        printf("%d %d %d\n", s, s * s, s * s * s);

        s++;
    }

    return 0;
}
