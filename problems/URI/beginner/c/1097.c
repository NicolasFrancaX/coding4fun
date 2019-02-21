/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1097
 *
 */

#include <stdio.h>

int main() {
    int i;

    for(i = 1; i <= 9; i += 2) {
        printf("I=%d J=%d\nI=%d J=%d\nI=%d J=%d\n",
                i, i + 6, i, i + 5, i, i + 4);
    }

    return 0;
}
