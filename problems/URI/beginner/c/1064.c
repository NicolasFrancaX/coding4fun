/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1064
 *
 */

#include <stdio.h>

int main() {
    float numbers[6], sum;
    int i, count;

    sum = 0;

    for(i = 0; i < 6; i++) {
        scanf("%f", &numbers[i]);

        if(numbers[i] > 0) {
            count++;
            sum += numbers[i];
        }
    }

    printf("%d valores positivos\n%.1f\n", count, (sum / count));


    return 0;
}
