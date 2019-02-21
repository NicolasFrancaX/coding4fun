/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1066
 *
 */

#include <stdio.h>

int main() {
    int numbers[5], i, even_count, odd_count, positive_count, negative_count;

    even_count = 0;
    odd_count = 0;
    positive_count = 0;
    negative_count = 0;

    for(i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);

        if(numbers[i] > 0) {
            positive_count++;
        } else if(numbers[i] < 0) {
            negative_count++;
        }

        if(numbers[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }

    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",
            even_count, odd_count, positive_count, negative_count);

    return 0;
}
