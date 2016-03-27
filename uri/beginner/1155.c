/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1155
 *
 */

#include <stdio.h>

int main() {
    float a = 1, sum = 0;

    while(a <= 100) {
        sum += (1 + 0.0) / a;
        a++;
    }

    printf("%.2f\n", sum);

    return 0;
}
