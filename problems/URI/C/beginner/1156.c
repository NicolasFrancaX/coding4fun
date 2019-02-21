/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1156
 *
 */

#include <stdio.h>

int main() {
    double sum = 1, a = 3.0, b = 2;

    while(a <= 39) {
        sum += a / b;

        a += 2;
        b *= 2;
    }

    printf("%.2lf\n", sum);

    return 0;
}
