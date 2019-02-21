/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1072
 *
 */

#include <stdio.h>

int main() {
    int n, i, count_in, count_out;

    scanf("%d", &n);

    int numbers[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);

        if(numbers[i] >= 10 && numbers[i] <= 20) {
            count_in++;
        }
    }

    count_out = n - count_in;

    printf("%d in\n%d out\n", count_in, count_out);

    return 0;
}
