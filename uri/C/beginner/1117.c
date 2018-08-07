/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1117
 *
 */

#include <stdio.h>

int main() {
    float n, sum, average;
    int i = 0;

    n = 1;
    sum = 0;

    while(i < 2) {
        scanf("%f", &n);

        if(n >= 0 && n <= 10) {
            sum += n;
            i++;
        } else {
            printf("nota invalida\n");
        }
    }

    average = 0.5 * sum;

    printf("media = %.2f\n", average);

    return 0;
}
