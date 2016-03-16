/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1015
 *
 */

#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, px, py, d;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    px = pow(x2 - x1, 2);
    py = pow(y2 - y1, 2);

    d = sqrt(px + py);

    printf("%.4lf\n", d);

    return 0;
}
