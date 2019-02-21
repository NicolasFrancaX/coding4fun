#include <stdio.h>
#include <string.h>
int main(){
	int t, i;
	char aa[]="pedra", bb[]="papel", cc[]="tesoura", dd[]="lagarto", ee[]="Spock";
	char sheldon[10], raj[10];

	scanf("%d",&t);
	for (i=1; i<=t; i++){

		scanf("%s %s", sheldon, raj);
		//Em caso de empate//
		if (strcmp(sheldon,raj)==0){
			printf("Caso #%d: De novo!\n",i);
		}
		//Caso o Sheldon diga pedra//
		else if(strcmp(aa,sheldon)==0){
			if ((strcmp(raj,ee)==0) || (strcmp(raj,bb)==0)){
				printf("Caso #%d: Raj trapaceou!\n",i);
			}
			else if ((strcmp(raj,dd)==0) || (strcmp(raj,cc)==0)){
				printf("Caso #%d: Bazinga!\n",i);
			}
		}
		//Caso o sheldon diga papel//
		else if(strcmp(bb,sheldon)==0){
			if ((strcmp(raj,cc)==0) || (strcmp(raj,dd)==0)){
				printf("Caso #%d: Raj trapaceou!\n",i);
			}
			else if ((strcmp(raj,aa)==0) || (strcmp(raj,ee)==0)){
				printf("Caso #%d: Bazinga!\n",i);
			}
		}
		//Caso sheldon diga tesoura//
		else if(strcmp(cc,sheldon)==0){
			if ((strcmp(raj,aa)==0) || (strcmp(raj,ee)==0)){
				printf("Caso #%d: Raj trapaceou!\n",i);
			}
			else if ((strcmp(raj,dd)==0) || (strcmp(raj,bb)==0)){
				printf("Caso #%d: Bazinga!\n",i);
			}
		}
		//Caso sheldon diga lagarto//
		else if(strcmp(dd,sheldon)==0){
			if ((strcmp(raj,aa)==0) || (strcmp(raj,cc)==0)){
				printf("Caso #%d: Raj trapaceou!\n",i);
			}
			else if ((strcmp(raj,bb)==0) || (strcmp(raj,ee)==0)){
				printf("Caso #%d: Bazinga!\n",i);
			}
		}
		//Caso o sheldon diga spock (ele sempre diz spock kkk)//
		else if(strcmp(ee,sheldon)==0){
			if ((strcmp(raj,dd)==0) || (strcmp(raj,bb)==0)){
				printf("Caso #%d: Raj trapaceou!\n",i);
			}
			else if ((strcmp(raj,aa)==0) || (strcmp(raj,cc)==0)){
				printf("Caso #%d: Bazinga!\n",i);
			}
		}
	}
	return 0;
}