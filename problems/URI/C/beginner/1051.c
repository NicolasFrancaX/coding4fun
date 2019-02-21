/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1051
 *
 */

#include <stdio.h>

int main() {
    float salary, taxes;

    scanf("%f", &salary);

    taxes = 0;

    if(salary >= 2000.01) {
        if(salary - 2000 > 1000) {
            taxes += 0.08 * 1000;
        } else {
            taxes += 0.08 * (salary - 2000);
        }
    }

    if(salary >= 3000.01) {
        if(salary - 3000 > 1500) {
            taxes += 0.18 * 1500;
        } else {
            taxes += 0.18 * (salary - 3000);
        }
    }

    if(salary > 4500) {
        taxes += 0.28 * (salary - 4500);
    }

    taxes == 0 ? printf("Isento\n") : printf("R$ %.2f\n", taxes);

    return 0;
}
