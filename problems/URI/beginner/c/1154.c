/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1154
 *
 */

#include <stdio.h>

int main() {
    int a, sum = 0, count = 0;
    float average;

    do {
        scanf("%d", &a);

        if(a >= 0) {
            sum += a;
            count++;
        }
    } while(a >= 0);

    average = (sum + 0.0) / count;

    printf("%.2f\n", average);

    return 0;
}
