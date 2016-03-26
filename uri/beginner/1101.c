/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1101
 *
 */

#include <stdio.h>

int main() {
    int a, b, sum, aux, i, boolean;

    boolean = 1;

    while(!!boolean) {
        scanf("%d %d", &a, &b);

        if(a > 0 && b > 0) {
            sum = 0;

            if(a > b) {
                aux = b;
                b = a;
                a = aux;
            }

            for(i = a; i <= b; i++) {
                sum += i;
                printf("%d ", i);
            }

            printf("Sum=%d\n", sum);

        } else {
            boolean = 0;
        }
    }


    return 0;
}