/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1045
 *
 */

#include <stdio.h>
#include <math.h>

int main() {
    int i, j;
    double x[3], aux;

    scanf("%lf %lf %lf", &x[0], &x[1], &x[2]);

    for(i = 0; i <= 3 ; i++) {
        for(j = 0; j < 2; j++) {
            if(x[j] > x[j + 1]) {
                aux = x[j + 1];
                x[j + 1] = x[j];
                x[j] = aux;
            }
        }
    }

    if(x[2] >= x[1] + x[0] || x[2] <= 0 || x[2] <= 0 || x[0] <= 0) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if(pow(x[2], 2) == pow(x[1], 2) + pow(x[0], 2)) {
            printf("TRIANGULO RETANGULO\n");
        } else if(pow(x[2], 2) > pow(x[1], 2) + pow(x[0], 2)) {
            printf("TRIANGULO OBTUSANGULO\n");
        } else if(pow(x[2], 2) < pow(x[1], 2) + pow(x[0], 2)) {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if(x[2] == x[1] && x[1] == x[0]) {
            printf("TRIANGULO EQUILATERO\n");
        } else if(x[2] == x[1] || x[1] == x[0]) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
