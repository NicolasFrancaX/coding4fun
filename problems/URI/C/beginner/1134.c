/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1134
 *
 */

#include <stdio.h>

int main() {
    int a, alcohol = 0, gasoline = 0, diesel = 0;

    do {
        scanf("%d", &a);

        switch(a) {
            case 1:
                alcohol++;
                break;
            case 2:
                gasoline++;
                break;
            case 3:
                diesel++;
                break;
        }

    } while(a != 4);

    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",
            alcohol, gasoline, diesel);

    return 0;
}
