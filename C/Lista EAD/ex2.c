/*Fa�a um programa que pergunte quanto voc� ganha por hora e o n�mero de horas
trabalhadas no m�s.Calcule e mostre o total do seu sal�rio no referido m�s,
Sabendo-se que s�o descontados 11% para o Imposto de Renda, 8% para o INSS
e 5% para o Sindicato, fa�a um programa que nos d�:

a. sal�rio bruto		d.quanto pagou ao sindicato								
b. quanto pagou de IR	e. o sal�rio l�quido	
c.quanto pagou ao INSS	f. calcule os descontos	 e o salario liqu�do
						 conforme a tabela abaixo											  
*/				

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	float salhora,hora,slbruto,inss,sind,sliquido,ir;
	
	printf("Quantas horas voc� trabalha por m�s? ");
	scanf("%f",&hora);
	printf("Qual seu sal�rio por hora? ");
	scanf("%f",&salhora);
	
	slbruto = hora*salhora;
	inss = (slbruto * 0.8);
	sind = (slbruto * 0.5);
	ir = (slbruto * 0.11);
	sliquido = (inss+sind+ir) - slbruto;
	
	printf("\n\nSeu sal�rio bruto � de: %.2f." ,slbruto);
	printf("\n\nForam descontados: %.2f para o INSS. " ,inss);
	printf("\n\nForam descontados: %.2f para o Sindicato. " ,sind);
	printf("\n\nSeu imposto de renda � de: %.2f." , ir);
	printf("\n\nSeu sal�rio l�quido � de: %.2f." , sliquido);
}
