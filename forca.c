#include <stdio.h>
#include <string.h>


int main(){
	char palavrasecreta [20];
	sprintf(palavrasecreta, "MELANCIA");
	
	int i;
	int j;
	int acertou = 0;
	int enforcou = 0;
	
	char chutes[26];
	int tentativas = 0;
	
	
	do {

    	for(i = 0; i < strlen(palavrasecreta); i++) {
    		
    		int achou = 0;
    		
    		//printf("Estou vendo a Letra secreta %d = %c\n",i, palavrasecreta[i]);
    		
    		for (j =0; j < tentativas; j++){
    			//printf("-> Chute %d %c\n", j, chutes[j]);
    			if (chutes[j] == palavrasecreta[i]){
    				//printf("---> Chute Correto\n");
    				achou = 1;
    				break;
				}
    			
			}
		if (achou){
			printf("%c ", palavrasecreta[i]);
		} else{
		
        printf("_ ");
    	}
    }
    	printf("\n");

		printf("\n\nInforme uma letra: ");
		char chute;
		scanf(" %c", &chute);
		chute = toupper(chute);
		
		chutes[tentativas] = chute;
		tentativas ++;
		
	
	
} while (!acertou && !enforcou);
}
