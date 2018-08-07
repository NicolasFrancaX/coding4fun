/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1012
 *
 */

#include <stdio.h>

int main() {
    double a, b, c, triangle, radius_circle, trapezium, square, rect;

    scanf("%lf %lf %lf", &a, &b, &c);

    // the area of the rectangled triangle that has base A and height C.
    triangle = a * c * 0.5;

    // the area of the radius's circle C. (pi = 3.14159)
    radius_circle = 3.14159 * c * c;

    // the area of the trapezium which has A and B by base, and C by height.
    trapezium = 0.5 * (a + b) * c;

    // the area of the square that has side B.
    square = b * b;

    // the area of the rectangle that has sides A and B.
    rect = a * b;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",
            triangle, radius_circle, trapezium, square, rect);

    return 0;
}
