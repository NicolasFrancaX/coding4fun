/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1065
 *
 */

#include <stdio.h>

int main() {
    int numbers[5], count, i;

    for(i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);

        if(numbers[i] % 2 == 0) {
            count++;
        }
    }

    printf("%d valores pares\n", count);

    return 0;
}
