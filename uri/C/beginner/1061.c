/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1061
 *
 */

#include <stdio.h>
#include <math.h>

int main() {
    double day_1, day_2, day_3, hour_1, hour_2, hour_3, min_1, min_2, min_3, second_1, second_2, second_3, total_1, total_2, total_3;
    char dia[3];

    scanf("%s %lf", dia, &day_1);
    scanf("%lf : %lf : %lf", &hour_1, &min_1, &second_1);
    scanf("%s %lf", dia, &day_2);
    scanf("%lf : %lf : %lf", &hour_2, &min_2, &second_2);

    total_1 = (day_1 * 24 * 60 * 60) + (hour_1 * 60 * 60) + (min_1 * 60) + (second_1);
    total_2 = (day_2 * 24 * 60 * 60) + (hour_2 * 60 * 60) + (min_2 * 60) + (second_2);
    total_3 = total_2 - total_1;

    day_3 = (total_3 - fmod(total_3, 24 * 60 * 60)) / (24 * 60 * 60);
    total_3 = fmod(total_3, 24 * 60 * 60);

    hour_3 = (total_3 - fmod(total_3, 60 * 60)) / (60 * 60);
    total_3 = fmod(total_3, 60 * 60);

    min_3 = (total_3 - fmod(total_3, 60)) / (60);
    total_3 = fmod(total_3, 60);

    second_3 = total_3;

    printf("%.0lf dia(s)\n%.0lf hora(s)\n%.0lf minuto(s)\n%.0lf segundo(s)\n",
            day_3, hour_3, min_3, second_3);

    return 0;
}
