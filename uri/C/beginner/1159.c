/*
 * https://www.urionlinejudge.com.br/judge/en/problems/view/1159
 *
 */

#include <stdio.h>

int main() {
    int a = 1, sum;

    do {
        sum = 0;

        scanf("%d", &a);

        if(a == 0) {
            return 0;
        }

        sum = (5 * a) + (a % 2 != 0 ? 25 : 20);

        printf("%d\n", sum);

    } while(a != 0);
}
