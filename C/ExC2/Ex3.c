/*Desenvolva um programa que calcule desconto de INSS de um funcinário, se o salário
for menor ou igual a do que R$ 1212,00 será de 7,5%, se estiver entre R$ 1212,01
e R$ 2427,35 será de 9%, se estiver entre R$ 2427,36 e R$ 3641,03 o desconto é de 12%,
se estriver entre R$ 3641,04 a R$ 7087,22 será de 14% e se for maior do que 7082,22 o
teto que é o máximo cobrado 14% de R$ 7087,22. Mostre o desconto e o valor do sálario
final.
*/
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	float salario,desconto;
	printf("Digite o salário: ");
	scanf("%f", &salario);
	if (salario<=1212){
		desconto = salario*0.075;
		salario = salario-desconto;
	printf("O novo salário é de: %.2f ",salario);
	}else if(salario>1212.01 && salario<2427.35){
		desconto = salario*0.09;
		salario = salario-desconto;		
	printf("O novo salário é de: %.2f ",salario);
	}else if(salario>2427.36 && salario<3641.03){
		desconto = salario*0.12;
		salario = salario-desconto;
	printf("O novo salário é de: %.2f ",salario);
	}else if(salario>3641.04 && salario<7087.22){
		desconto = salario*0.14;
		salario = salario-desconto;
	printf("O novo salário é de: %.2f ",salario);
	}else if(salario>7087.22){
		desconto = salario*0.14;
		salario = salario-desconto;
	printf("O novo salário é de: %.2f ",salario);
	}
	}
