/* 1. Ana Maria, precisa de dinheiro e decidiu fazer uma rifa de sua bicicleta.
Para ajudar Ana maria crie uma fun��o que receba como par�metro um
vetor de 10 nomes e sorteie um aleat�riamente.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
void rifa(char nomes[30][10]);
int main(){
	srand(time(NULL));
	setlocale(LC_ALL,"");
	char nomes[30][10];
	int i,x;
	
	for(i = 0; i < 10; i++){
		printf("Digite um %d�nome para ser sorteado: ", i+1);
		scanf("%s",&nomes[i]);
	}
	rifa(nomes);
}
void rifa(char nomes[30][10]){
	int i;
	i = rand()%10;
	printf("O ganhador do sorteio �:%s ", nomes[i]);
}
