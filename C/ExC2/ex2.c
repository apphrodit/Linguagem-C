/*Desenvolva um programa que leia o sal�rio de um funcion�rio e o n�mero de filhos
Se o s�lario for menor que R$ 2000 o funcion�rio receber� um sal�rio fam�lia 
equivalente a 45 reais por filho. Apresente o s�lario final.
*/


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main (){
	setlocale(LC_ALL,"");
	
	
	int filho;
	float salario;
	
	printf("Informe o valor do sal�rio: ");
	scanf("%f",&salario);
	if (salario>=2000) exit(0);
	printf("Informe a quantidade de filhos: ");
	scanf("%d",&filho);
	filho=filho*45;
	filho=salario+filho;
	printf("O s�lario final que ele ir� receber �: %d",filho);
}
