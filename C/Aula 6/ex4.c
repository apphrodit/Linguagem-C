//4 - Localize um valor informado pelo usuário dentro de um vetor com dimensão 10;
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
		
	int i=0;
	int num [10];
	int x; 
	
	
	for (i=0; i< 10;i++){
		printf("Digite os 10 valores do vetor: ");
		scanf ("%d",&num[i]);
	}
	
		printf("\nDigite o valor que você quer localizar dentro do vetor: ");
		scanf("%d",&x);	
		printf("%d",num[x]);	
		
}
