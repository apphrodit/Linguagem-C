/* 2. Em alguns casos a rifa poderá ter mais de um ganhador então crie uma função 
que receba como parâmetro um vetor de 10 nomes e um total de 
quantos deseja sortear, e mostre na tela estes nomes sorteados.*/
/*Pedro
Raul
Matheus
Marcelo
Gabriel
Rodrigo
João
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
		printf("Digite um %dº nome para ser sorteado: ", i+1);
		scanf("%s",&nomes[i]);
	}
	printf("\n");
	printf("Digite o número de vencedores deste sorteio: ");
	scanf("%d",&x);
	if(x == 1){
		printf("O ganhador deste sorteio é o(a): ");
		rifa(nomes);
		}else{
			printf("Os ganhadores deste sorteio são: ");
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
	
