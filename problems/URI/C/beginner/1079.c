/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1079
 *
 */

#include <stdio.h>

int main() {
    int n, i, j;

    scanf("%d", &n);

    float numbers[n][3], averages[n];

    for(i = 0; i < n; i++) {
        scanf("%f %f %f", &numbers[i][0], &numbers[i][1], &numbers[i][2]);
        averages[i] = (0.2 * numbers[i][0]) + (0.3 * numbers[i][1]) + (0.5 * numbers[i][2]);
    }

    for(i = 0; i < n; i++) {
        printf("%.1f\n", averages[i]);
    }

    return 0;
}
