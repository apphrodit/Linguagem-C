/* 2. Em alguns casos a rifa poder� ter mais de um ganhador ent�o crie uma fun��o 
que receba como par�metro um vetor de 10 nomes e um total de 
quantos deseja sortear, e mostre na tela estes nomes sorteados.*/
/*Pedro
Raul
Matheus
Marcelo
Gabriel
Rodrigo
Jo�o
Lucas
Jorge
Enzo*/
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
		printf("Digite um %d� nome para ser sorteado: ", i+1);
		scanf("%s",&nomes[i]);
	}
	printf("\n");
	printf("Digite o n�mero de vencedores deste sorteio: ");
	scanf("%d",&x);
	if(x == 1){
		printf("O ganhador deste sorteio � o(a): ");
		rifa(nomes);
		}else{
			printf("Os ganhadores deste sorteio s�o: ");
			for(i = 0; i < x; i++){
			rifa(nomes);
		}	
	}
}
void rifa(char nomes[30][10]){
	int i;
	i = rand()%10;
	printf("%s ",nomes[i]);
}
	
