/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1188
 *
 */

#include <stdio.h>

int main() {
    double n[12][12], sum = 0, average = 0;
    int i, j;
    char operation;

    scanf("%c", &operation);

    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12 ; j++) {
            scanf("%lf", &n[i][j]);
            if(i + j > 11 && i > j) {
                sum += n[i][j];
            }
        }
    }

    if(operation == 'S') {
        printf("%.1lf\n", sum);

    } else if(operation, 'M') {
        average = (sum + 0.0) / 30;
        printf("%.1lf\n", average);
    }

    return 0;
}
