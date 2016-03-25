/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1099
 *
 */

#include <stdio.h>

int main() {
    int inputs, i, j, aux, sum;

    scanf("%d", &inputs);

    int numbers[inputs][3];

    for(i = 0; i < inputs; i++) {

        scanf("%d %d", &numbers[i][0], &numbers[i][1]);

        if(numbers[i][0] > numbers[i][1]) {
            aux = numbers[i][1];
            numbers[i][1] = numbers[i][0];
            numbers[i][0] = aux;
        }

        numbers[i][2] = 0;

        // Fazendo um ranger
        for(j = numbers[i][0]; j < numbers[i][1]; j++) {
            if(j % 2 != 0 && j != numbers[i][0]) {
                numbers[i][2] += j;
            }
        }
    }

    for(i = 0; i < inputs; i++) {
        printf("%d\n", numbers[i][2]);
    }

    return 0;
}
