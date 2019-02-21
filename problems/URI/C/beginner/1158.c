/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1158
 *
 */

#include <stdio.h>

int main() {
    int r, i = 1, j = 0, a, b, sum = 0;

    scanf("%d", &r);

    while(i <= r) {
        scanf("%d %d", &a, &b);

        j = 0;

        while(j < b) {
            if(a % 2 != 0) {
                sum += a;
                a += 2;
                j++;
            } else {
                a++;

            }
        }

        printf("%d\n", sum);

        sum = 0;

        i++;
    }

    return 0;
}
