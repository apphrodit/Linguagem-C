//3 - Utilizando apenas um vetor de tamanho 6, troque os valores de maneira inversa;
#include <stdio.h>
#include <locale.h>

int main (){
	
	int i = 0;
	int num[6]; 
	
	
	for (i=0; i<=6; i++){
		printf("\nDigite os valores do vetor:");
		scanf("%d",&i);
	}
	
	for (i=6; i>0; i--){
		printf("%d",i);
	}
	
}

