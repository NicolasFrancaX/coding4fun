/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1118
 *
 */

#include <stdio.h>

int main() {
    float n = 1, sum = 0, average;
    int i = 0, option, boolean;

    option = 1;

    while(option == 1) {
        while(i < 2) {
            scanf("%f", &n);

            if(n >= 0 && n <= 10) {
                sum += n;
                i++;
            } else {
                printf("nota invalida\n");
            }
        }

        average = 0.5 * sum;

        printf("media = %.2f\n", average);

        boolean = 1;
        sum = 0;
        i = 0;

        while(!!boolean) {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &option);
            if(option == 1 || option == 2) {
                boolean = 0;
            }
        }
    }

    return 0;
}
