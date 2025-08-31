#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> 

void forca (int estado){
	if(estado==0){
		printf("\n------------");
		printf("\n|          |");
		printf("\n|");
		printf("\n|");
		printf("\n|");
		printf("\n|");
		printf("\n|");
		printf("\n_\n");
	}
	if(estado==1){
		printf("\n------------");
		printf("\n|          |");
		printf("\n|          O");
		printf("\n|");
		printf("\n|");
		printf("\n|");
		printf("\n|");
		printf("\n_");
	}
	if(estado==2){
		printf("\n------------");
		printf("\n|          |");
		printf("\n|          O");
		printf("\n|          |");
		printf("\n|");
		printf("\n|");
		printf("\n|");
		printf("\n_");
	}
	if(estado==3){
		printf("\n------------");
		printf("\n|          |");
		printf("\n|          O");
		printf("\n|         /|");
		printf("\n|");
		printf("\n|");
		printf("\n|");
		printf("\n_");
	}
	if(estado==4){
		printf("\n------------");
		printf("\n|          |");
		printf("\n|          O");
		printf("\n|         /|\\");
		printf("\n|");
		printf("\n|");
		printf("\n|");
		printf("\n_");
	}
	if(estado==5){
		printf("\n------------");
		printf("\n|          |");
		printf("\n|          O");
		printf("\n|         /|\\");
		printf("\n|         /");
		printf("\n|");
		printf("\n|");
		printf("\n_");
	}
	if(estado==6){
		printf("\n------------");
		printf("\n|          |");
		printf("\n|          O");
		printf("\n|         /|\\");
		printf("\n|         / \\");
		printf("\n|");
		printf("\n|");
		printf("\n_");
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Váriaveis para começar o jogo
	char jogador1[50], jogador2[50], palavra_secreta[30], palavra_atual[30];
	
	//Váriaveis para loop
	int a= 0, tentativas= 6, estado_forca= 0;
	char novamente[5];
	
	printf("\n=============JOGO DA FORCA=============\n");
	system ("pause");
	system ("cls");
	
	printf("\n=============JOGO DA FORCA=============\n");
	printf("\nJogador 1.\n informe seu nome:\n");
	fgets(jogador1, 50, stdin);
	
	printf("\nJogador 2.\n informe seu nome:\n");
	fgets(jogador2, 50, stdin);
	
	printf("\nVamos começar o jogo!\n");
	system ("pause");
	system ("cls");
	
	printf("Jogador %s, Informe a palavra secreta:\n", jogador1);
	scanf("%s", &palavra_secreta);
	system ("pause");
	system ("cls");
	
    forca(0);
    
	while(a<tentativas){
		printf("\nTentativas %d de %d - Jogador %s, tente adivinhar a palavra:\n", a + 1, tentativas, jogador2);
		scanf("%s", palavra_atual);
		system("cls");
		if(strcmp(palavra_atual, palavra_secreta)==0){
    		printf("\nVitória do jogador 2: %s", jogador2);
    		printf("Derrota do jogador 1: %s", jogador1);
    		break;
		}
		else{
			printf("\nPalavra errada. Restam %d tentativas!", tentativas - a - 1);
			a++;
			estado_forca++;
			forca(estado_forca);
		}
		if(a==tentativas){
			printf("\nDerrota do jogador 2: %s", jogador2);
			printf("Vitória do jogador 1: %s", jogador1);
			printf("A palavra secreta era: %s\n", palavra_secreta);
		}
	}
	
	return 0;
}
