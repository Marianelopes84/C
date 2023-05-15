#include <stdio.h>

int main () {

    //imprime cabecalho do jogo
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 42;

    int chute;
    int ganhou = 0;
    int tentativas = 1;

    while(1) {

        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0) {
            printf("Você não pode chutar números negativos!\n");
            continue;
        }

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if(acertou) {
            printf("Parabéns! Você acertou!\n");
            ganhou = 1;
            break;
        }

        else if(maior) {
            printf("Seu chute foi maior que o número secreto\n");
        }
        else{
                printf("Seu chute eh menor que o numero secreto... Tente novamente:\n");
		tentativas = tentativas +1;}
    }

    printf("Fim de jogo!\n");
    printf("Você acertou em %d tentativas!\n", tentativas);
    
}
