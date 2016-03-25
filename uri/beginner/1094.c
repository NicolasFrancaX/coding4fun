/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1094
 *
 */

#include <stdio.h>

int main() {
    int i, in, aux, sum, rabbit, rat, frog;
    float percentage_rabbit, percentage_rat, percentage_frog;
    char animal;

    rabbit = 0;
    rat = 0;
    frog = 0;
    i = 0;

    scanf("%d", &in);

    while(i < in) {
        scanf("%d %c", &aux, &animal);

        if(animal == 'C') {
            rabbit += aux;
        } else if(animal == 'R') {
            rat += aux;
        } else if(animal == 'S') {
            frog += aux;
        }

        i++;
    }

    sum = rabbit + rat + frog;
    percentage_rabbit = (100.0 * rabbit) / sum;
    percentage_rat    = (100.0 * rat) / sum;
    percentage_frog   = (100.0 * frog) / sum;

    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n",
            sum, rabbit, rat, frog, percentage_rabbit, percentage_rat, percentage_frog);
}
