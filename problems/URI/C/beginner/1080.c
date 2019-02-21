/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1080
 *
 */

#include <stdio.h>

int main() {
    int i, numbers[100], max_position, max;

    for(i = 0; i < 100; i++) {
        scanf("%d", &numbers[i]);
    }

    max = numbers[0];
    max_position = 1;

    for(i = 1; i < 100; i++) {
        if(max < numbers[i]) {
            max = numbers[i];
            max_position = i + 1;
        }
    }

    printf("%d\n%d\n", max, max_position);

    return 0;
}
