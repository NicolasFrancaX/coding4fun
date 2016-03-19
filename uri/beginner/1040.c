/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1040
 *
 */

#include <stdio.h>

int main() {
    float n_1, n_2, n_3, n_4, n_5, media;

    scanf("%f %f %f %f", &n_1, &n_2, &n_3, &n_4);

    media =  (n_1 * 0.2) + (n_2 * 0.3) + (n_3 * 0.4) + (n_4 * 0.1);

    printf("Media: %.1f\n", media);

    if(media >= 7) {
        printf("Aluno aprovado.\n");
    } else if(media >= 5 && media < 7) {
        printf("Aluno em exame.\n");

        scanf("%f", &n_5);

        printf("Nota do exame: %.1f\n", n_5);

        media = 0.5 * (media + n_5);

        if(media >= 5) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", media);
    } else {
        printf("Aluno reprovado.\n");
    }
}
