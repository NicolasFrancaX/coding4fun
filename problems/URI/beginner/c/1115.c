/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1115
 *
 */

#include <stdio.h>

int main() {
    int x = 1, y = 1;

    while(x != 0 && y != 0) {
        scanf("%d %d", &x, &y);

        if(x == 0 || y == 0) {
            return 0;
        } else if(x > 0 && y > 0) {
            printf("primeiro\n");
        } else if(x < 0 && y > 0) {
            printf("segundo\n");
        } else if(x < 0 && y < 0) {
            printf("terceiro\n");
        } else if(x > 0 && y < 0) {
            printf("quarto\n");
        }
    }
}
