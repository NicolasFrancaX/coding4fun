/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1144
 *
 */

#include <stdio.h>

int main() {
    int lines, i = 1;

    scanf("%d", &lines);

    while(i <= lines) {
        printf("%d %d %d\n", i, (i * i), (i * i * i));
        printf("%d %d %d\n", i, (i * i) + 1, (i * i * i) + 1);

        i++;
    }

    return 0;
}
