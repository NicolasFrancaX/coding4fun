/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1021
 *
 */

#include <stdio.h>
#include <math.h>

int main() {
    double n, n_100, n_50, n_20, n_10, n_5, n_2, m_1, m_050, m_025, m_010, m_005, m_001;

    scanf("%lf", &n);

    n_100 = (n - fmod(n, 100)) / 100;
    n = fmod(n, 100);

    n_50 = (n - fmod(n, 50)) / 50;
    n = fmod(n, 50);

    n_20 = (n - fmod(n, 20)) / 20;
    n = fmod(n, 20);

    n_10 = (n - fmod(n, 10)) / 10;
    n = fmod(n, 10);

    n_5 = (n - fmod(n, 5)) / 5;
    n = fmod(n, 5);

    n_2 = (n - fmod(n, 2)) / 2;
    n = fmod(n, 2);

    m_1 = (n - fmod(n, 1)) / 1;
    n = fmod(n, 1);

    m_050 = (n - fmod(n, 0.5)) / 0.5;
    n = fmod(n, 0.5);

    m_025 = (n - fmod(n, 0.25)) / 0.25;
    n = fmod(n, 0.25);

    m_010 = (n - fmod(n, 0.1)) / 0.1;
    n = fmod(n, 0.1);
    m_005 = (n - fmod(n, 0.05)) / 0.05;
    n = fmod(n, 0.05);

    m_001 = n / 0.01;

    printf("NOTAS:\n%0.lf nota(s) de R$ 100.00\n%0.lf nota(s) de R$ 50.00\n%0.lf nota(s) de R$ 20.00\n%0.lf nota(s) de R$ 10.00\n%0.lf nota(s) de R$ 5.00\n%0.lf nota(s) de R$ 2.00\n",
            n_100, n_50, n_20, n_10, n_5, n_2);
    printf("MOEDAS:\n%0.lf moeda(s) de R$ 1.00\n%0.lf moeda(s) de R$ 0.50\n%0.lf moeda(s) de R$ 0.25\n%0.lf moeda(s) de R$ 0.10\n%0.lf moeda(s) de R$ 0.05\n%0.lf moeda(s) de R$ 0.01\n",
            m_1, m_050, m_025, m_010, m_005, m_001);

    return 0;
}
