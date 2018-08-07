/*
 * Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1049
 *
 */

#include <stdio.h>
#include <string.h>

int main() {
    char phylum[256], class[256], specie[256], result[256];

    scanf("%s", phylum);
    scanf("%s", class);
    scanf("%s", specie);

    if(strcmp(phylum, "vertebrado") == 0) {
        if(strcmp(class, "ave") == 0) {
            if(strcmp(specie, "carnivoro") == 0) {
                strcpy(result, "aguia");
            } else if(strcmp(specie, "onivoro") == 0) {
                strcpy(result, "pomba");
            }
        } else if(strcmp(class, "mamifero") == 0) {
            if(strcmp(specie, "onivoro") == 0) {
                strcpy(result, "homem");
            } else if(strcmp(specie, "herbivoro") == 0) {
                strcpy(result, "vaca");
            }
        }

    } else if(strcmp(phylum, "invertebrado") == 0) {
        if(strcmp(class, "inseto") == 0) {
            if(strcmp(specie, "hematofago") == 0) {
                strcpy(result, "pulga");
            } else if(strcmp(specie, "herbivoro") == 0) {
                strcpy(result, "lagarta");
            }
        } else if(strcmp(class, "anelideo") == 0) {
            if(strcmp(specie, "hematofago") == 0) {
                strcpy(result, "sanguessuga");
            } else if(strcmp(specie, "onivoro") == 0) {
                strcpy(result, "minhoca");
            }
        }
    }

    printf("%s\n", result);

    return 0;
}
