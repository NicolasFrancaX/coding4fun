/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1131
 *
 */

#include <stdio.h>

int main() {
    int i, count_grenais = 0, gols_inter = 0, gols_gremio = 0, vitorias_inter = 0, vitorias_gremio = 0, empates = 0;

    do {
        scanf("%d %d", &gols_inter, &gols_gremio);

        if(gols_inter > gols_gremio) {
            vitorias_inter++;
        } else if(gols_gremio > gols_inter) {
            vitorias_gremio++;
        } else {
            empates++;
        }

        count_grenais++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &i);
    } while(i == 1);

    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",
            count_grenais, vitorias_inter, vitorias_gremio, empates);

    if(vitorias_inter > vitorias_gremio) {
        printf("Inter venceu mais\n");
    } else if(vitorias_gremio > vitorias_inter) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Nao houve vencedor\n");
    }
}
