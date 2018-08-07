/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1060
 *
 */

#include <stdio.h>

int main() {
    int i, count;
    float number[6];

    for(i = 0; i < 6; i++) {
        scanf("%f", &number[i]);

        if(number[i] > 0) {
            count++;
        }
    }

    printf("%d valores positivos\n", count);

    return 0;
}
