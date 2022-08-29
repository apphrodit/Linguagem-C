/*Desenvolva um programa que leia o salário de um funcionário e o número de filhos
Se o sálario for menor que R$ 2000 o funcionário receberá um salário família 
equivalente a 45 reais por filho. Apresente o sálario final.
*/


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main (){
	setlocale(LC_ALL,"");
	
	
	int filho;
	float salario;
	
	printf("Informe o valor do salário: ");
	scanf("%f",&salario);
	if (salario>=2000) exit(0);
	printf("Informe a quantidade de filhos: ");
	scanf("%d",&filho);
	filho=filho*45;
	filho=salario+filho;
	printf("O sálario final que ele irá receber é: %d",filho);
}
