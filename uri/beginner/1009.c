/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1009
 *
 */

#include <stdio.h>

int main() {
    char name[256];
    double salary, sale_total, total;

    scanf("%s", name);
    scanf("%lf", &salary);
    scanf("%lf", &sale_total);

    total = salary + (sale_total * 0.15);

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
