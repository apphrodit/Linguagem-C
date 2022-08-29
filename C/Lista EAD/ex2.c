/*Faça um programa que pergunte quanto você ganha por hora e o número de horas
trabalhadas no mês.Calcule e mostre o total do seu salário no referido mês,
Sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS
e 5% para o Sindicato, faça um programa que nos dê:

a. salário bruto		d.quanto pagou ao sindicato								
b. quanto pagou de IR	e. o salário líquido	
c.quanto pagou ao INSS	f. calcule os descontos	 e o salario liquído
						 conforme a tabela abaixo											  
*/				

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	float salhora,hora,slbruto,inss,sind,sliquido,ir;
	
	printf("Quantas horas você trabalha por mês? ");
	scanf("%f",&hora);
	printf("Qual seu salário por hora? ");
	scanf("%f",&salhora);
	
	slbruto = hora*salhora;
	inss = (slbruto * 0.8);
	sind = (slbruto * 0.5);
	ir = (slbruto * 0.11);
	sliquido = (inss+sind+ir) - slbruto;
	
	printf("\n\nSeu salário bruto é de: %.2f." ,slbruto);
	printf("\n\nForam descontados: %.2f para o INSS. " ,inss);
	printf("\n\nForam descontados: %.2f para o Sindicato. " ,sind);
	printf("\n\nSeu imposto de renda é de: %.2f." , ir);
	printf("\n\nSeu salário líquido é de: %.2f." , sliquido);
}
