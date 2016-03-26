/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1116
 *
 */

#include <stdio.h>

int main() {
    int n, i, a, b;

    i = 0;
    scanf("%d", &n);

    while(i < n) {
        scanf("%d %d", &a, &b);

        if(b != 0) {
            printf("%.1f\n", (a + 0.0) / b);
        } else {
            printf("divisao impossivel\n");
        }

        i++;
    }

    return 0;
}
