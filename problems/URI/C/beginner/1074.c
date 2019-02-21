/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1074
 *
 */

#include <stdio.h>

int main() {
    int n, i, j;

    scanf("%d", &n);

    int numbers[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    for(j = 0; j < n; j++) {
        if(numbers[j] % 2 == 0 && numbers[j] > 0) {
            printf("EVEN POSITIVE\n");
        } else if(numbers[j] % 2 == 0 && numbers[j] < 0) {
            printf("EVEN NEGATIVE\n");
        } else if(numbers[j] % 2 != 0 && numbers[j] > 0) {
            printf("ODD POSITIVE\n");
        } else if(numbers[j] % 2 != 0 && numbers[j] < 0) {
            printf("ODD NEGATIVE\n");
        } else {
            printf("NULL\n");
        }
    }

    return 0;
}
