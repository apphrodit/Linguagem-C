/*Crie um vetor de tamanho 10, permita que o usu�rio o preencha e informe :
	- A soma e m�dia dos pares;
	- A soma e m�dia dos impares;
	- O total de n�meros pares;
	- O total de n�meros impares;

*/
#include <stdio.h>
#include <locale.h>

int main (){
	
	int num[10], vetpar[10],vetimp[10];
	int i,par, impar;
	int contpar = 0, contimp = 0;

	for (i = 0; i < 10; i++){
		printf("Digite os valores do primeiro vetor:");
		scanf("%d",&num[i]);
	}
	for (i = 0; i < 10; i++){
		if (vetpar [i] %2==0){
		contpar = vetpar[i];
		contpar++;
	}else
		contimp = vetimp[i];
		contimp++;		
	}
}
