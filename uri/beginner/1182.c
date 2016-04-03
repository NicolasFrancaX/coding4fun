/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1181
 *
 */

#include <stdio.h>
#include <string.h>

int main() {
    float n[12][12], sum = 0, average = 0;
    int column, i, j;
    char operation;

    scanf("%d ", &column);
    scanf("%c", &operation);

    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12; j++) {
            scanf("%f", &n[i][j]);
        }
    }

    for(i = 0; i < 12; i++) {
        sum += n[i][column];
    }

    if(operation == 'S') {
        printf("%.1f\n", sum);

    } else if(operation, 'M') {
        average = (sum + 0.0) / 12;
        printf("%.1f\n", average);
    }

    return 0;
}
