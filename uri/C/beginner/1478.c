/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1478
 *
 */

#include <stdio.h>

int main() {
    int count = 0, h, i, j, m[100];

    do {
        scanf("%d", &m[count]);

        count++;
    } while(m[count - 1] != 0);

    for(h = 0; h < count - 1; h++) {
        int n[m[h]][m[h]];

        for(i = 0; i < m[h]; i++) {
            for(j = 0; j < m[h]; j++) {
                if(i == j) {
                    n[i][j] = 1;
                } else if(i < j) {
                    n[i][j] = n[i][j - 1] + 1;
                } else if(i > j) {
                    n[i][j] = n[i - 1][j] + 1;
                }

                if(n[i][j] < 10) {
                    printf("  ");
                } else if(n[i][j] < 100) {
                    printf(" ");
                }

                printf("%d", n[i][j]);

                if(j == m[h] - 1) {
                    printf("\n");
                } else {
                    printf(" ");
                }
            }
        }

        printf("\n");
    }

    return 0;
}
