/*Escreva um programa que exiba na tela em ordem crescente, apenas os números pares
existentes de 11 a 250.
*/
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int i, tab=30;
	printf("Numeros pares entre 11 e 250: \n");
	for( i = 11; i < 250; i++){
		if(i%2==0){
			printf("%d",i);
			if(tab==1){
				printf("\n");
				tab+=20;
				}else{
					printf("\t");
			}
		}
	}
}
