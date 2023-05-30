#include <stdio.h>
#include <string.h>

int main(){
	char palavrasecreta [20];
	sprintf(palavrasecreta, "MELANCIA");
	
	int i;
	int acertou = 0;
	int enforcou = 1;
	
	do{
		char chute;
		printf("Qual eh a Letra?");
		scanf("%c", &chute);
		
		for (i = 0; i < strlen(palavrasecreta); i++){
		
			if (palavrasecreta[i] == chute) {
			printf("A posicao %d tem essa letra!\n", i);
		}
	} 
	
} while (!acertou && !enforcou);
}
