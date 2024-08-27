#include <stdio.h>
#include <stdlib.h>

#define NUMERO_DE_TENTATIVAS 3

int main(void) {
	printf("*********************************\n");	
	printf("* Bem vindo ao Jogo de adivinhação *\n");
	printf("**********************************\n");
	
int numerosecreto = 42;
int chute;
int ganhou = 0;
int tentativas = 1;

while(!ganhou) {
	printf("Qual o seu %d. chute? ", tentativas);
	scanf("%d", &chute);
	if(chute < 0) {
		printf("Você nao pode usar numeros negativos\n");
		continue;
	}
	printf("Seu %d. chute foi %d!\n", tentativas, chute);
	
int acertou = chute == numerosecreto;
int maior = chute == numerosecreto;

if(acertou) {
	printf("Parabens! Voce acertou!\n");
	ganhou = 1;
} else {
	if(maior) {
		printf("Seu chute foi maior que o numero secreto!\n");
	} else {
		printf("Seu chute foi menor que o numero secreto!\n");
	}
}

}

printf("Obrigado por jogar!\n");
	return 0;
}
