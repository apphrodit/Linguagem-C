/*1 - Crie dois vetores num�ricos de dimens�o 5 com valores informados pelo usu�rio.
Apresente a soma do primeiro vetor com o inverso do segundo.
*/

#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"");
	
	int nums[5] , num[5];
	
	int i = -1, soma=0, cont=1,contt=1; 
	
	
	//Primeiro Vetor 
	for (i=0; i<5; i++){
		printf("\nDigite os valores do primeiro vetor %d�: ", cont);
		scanf("%d",&nums[i]);
		cont++;
	}
	
	//Segundo Vetor
	for (i=0; i<5; i++){
		printf("\nDigite os valores do segundo vetor %d�: ",contt);
		scanf("%d",&num[i]);
		contt++; 
	}
	

	{
	printf("%d",nums[0] + num[4]);
	printf("%d",nums[1] + num[3]);
	printf("%d",nums[2] + num[2]);
	printf("%d",nums[3] + num[1]);
	printf("%d",nums[4] + num[0]);
	}
			
}
