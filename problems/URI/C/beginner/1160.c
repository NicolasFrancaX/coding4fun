/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1160
 *
 */

#include <stdio.h>

int main() {
    int i, r = 0;
    int pa, pb, count;
    double ga, gb;

    scanf("%d", &r);

    for(i = 0; i < r; i++) {
        scanf("%d %d %lf %lf", &pa, &pb, &ga, &gb);

        for(count = 0; count <= 100; count++) {
            if(pa > pb) {
                break;
            }

            pa += 0.01 * ga * pa;
            pb += 0.01 * gb * pb;
        }

        if(count > 100) {
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", count);
        }
    }

    return 0;
}