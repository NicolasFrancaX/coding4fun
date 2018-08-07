/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1146
 *
 */

#include <stdio.h>

int main() {
    int i, n;

    do {
        i = 1;

        scanf("%d", &n);

        if(n == 0) {
            return 0;
        }

        while(i < n) {
            printf("%d ", i);
            i++;
        }

        printf("%d\n", i);
    } while(i != 0);

}
