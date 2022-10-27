/* 1. Ana Maria, precisa de dinheiro e decidiu fazer uma rifa de sua bicicleta.
Para ajudar Ana maria crie uma função que receba como parâmetro um
vetor de 10 nomes e sorteie um aleatóriamente.*/

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
		printf("Digite um %dºnome para ser sorteado: ", i+1);
		scanf("%s",&nomes[i]);
	}
	rifa(nomes);
}
void rifa(char nomes[30][10]){
	int i;
	i = rand()%10;
	printf("O ganhador do sorteio é:%s ", nomes[i]);
}
