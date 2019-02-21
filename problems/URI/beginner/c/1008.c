/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1008
 *
 */

#include <stdio.h>

int main() {
    int NUMBER, HOURS;
    float APH, SALARY;

    scanf("%d", &NUMBER);
    scanf("%d", &HOURS);
    scanf("%f", &APH);

    SALARY = HOURS * APH;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", NUMBER, SALARY);

    return 0;
}
