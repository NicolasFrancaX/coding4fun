/*
 * https://www.urionlinejudge.com.br/judge/en/problems/view/1048
 *
 */

#include <stdio.h>

int main() {
    float salary, improved_salary, improve;
    int percentual;

    scanf("%f", &salary);

    if(salary >= 0 && salary <= 400.00) {
        percentual = 15;
    } else if(salary >= 400.01 && salary <= 800.00) {
        percentual = 12;
    } else if(salary >= 800.01 && salary <= 1200.00) {
        percentual = 10;
    } else if(salary >= 1200.01 && salary <= 2000.00) {
        percentual = 7;
    } else if(salary > 2000) {
        percentual = 4;
    }
    improve = 0.01 * salary * percentual;
    improved_salary = salary + improve;

    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d \%\n",
            improved_salary, improve, percentual);

    return 0;
}
