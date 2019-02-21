/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1114
 *
 */

#include <stdio.h>
#define PASSWORD 2002

int main() {
    int a = 0;

    while(a != PASSWORD) {
        scanf("%d", &a);

        if(a == PASSWORD) {
            printf("Acesso Permitido\n");
        } else {
            printf("Senha Invalida\n");
        }
    }

    return 0;
}
