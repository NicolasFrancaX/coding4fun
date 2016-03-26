/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1113
 *
 */

#include <stdio.h>

int main() {
    int a = 0, b = 1;


    while(a != b) {
        scanf("%d %d", &a, &b);

        if(a > b) {
            printf("Decrescente\n");
        } else if(a < b) {
             printf("Crescente\n");
        }
    }

    return 0;
}
