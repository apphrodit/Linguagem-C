/*Ana Maria organiza campeonatos de diversos esportes, como futebol, basquete, entre outros, 
crie uma fun��o que receba 40 nomes de times e quantos times cada grupo deve ter, 
a fun��o deve mostrar na tela os times separados em grupos por�m sorteados aleat�riamente.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void grupos (char times[30][40]);
int main (){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	int i,j,grupo2;
	char times [30][40];
	for(i = 0; i < 40; i++){
	printf("Insira aqui o %d� time: ", i+1);
	scanf("%s",&times[i]);
	printf("\n");
	}
	printf("Digite aqui a quantidade de grupos que voc� deseja: ");
	scanf("%d", &grupo2);
	
}
void grupos (char times[30][40]){
	int i,j;
	do{
		times[i] = rand() % 40;
	}
	
	printf("Este � o primeiro grupo: ", times[i]); 
}
