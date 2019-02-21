/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1186
 *
 */

#include <stdio.h>

int main() {
    float n[12][12], sum = 0, average = 0;
    int i, j;
    char operation;

    scanf("%c", &operation);

    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12 ; j++) {
            scanf("%f", &n[i][j]);
            if(i + j > 11) {
                sum += n[i][j];
            }
        }
    }

    if(operation == 'S') {
        printf("%.1f\n", sum);

    } else if(operation, 'M') {
        average = (sum + 0.0) / (((12 * 12) - 12)/2);
        printf("%.1f\n", average);
    }

    return 0;
}
