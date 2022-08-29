/*4. As organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e lhe contrataram para desen-
-volver o programa que calculará os reajustes. Faça um programa que recebe o salário de um colaborador e o reajuste
segundo o seguinte critério, baseado no salário atual:
*/

// salários até R$ 280,00 (incluindo): aumento de 20%
// salários entre R$ 280,00 e R$ 700,00: aumento de 15%
// salários entre R$ 700,00 e R$ 1500,00: aumento de 10%
// salários de R$ 1500,00 em diante: aumento de 5%

//APOS O AUMENTO SER REALIZADO, INFORME NA TELA

// o salário antes do reajuste; x
// o percentual de aumento aplicado; x 
// o valor do aumento;
// o novo salário, após o aumento;


#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	float salario,novosalario, aumento;
	
	printf("Digite o salário do colaborador: ");
	scanf("%f",&salario);
	
	printf("O seu salário antes do reajuste é de : %.2f",salario);


	if (salario<280){
		printf("\n O percentual do seu aumento é de 20%%");
	}else if (salario <= 700 && salario> 280){
		printf("\n O percentual do seu aumento é de 15%%");
	}else if (salario <= 1500 && salario > 700){
		printf ("\n O percentual do seu aumento é de 10%%");
	}else if (salario > 1500){
		printf ("\n O percentual do seu aumento é de 5%%");
	}else{
		printf ("\n Sálario incorreto. ");
	}
	
	if (salario <= 280){
		aumento = salario * 0.2;
		printf("O seu aumento é de %.2f: ", aumento);
	
	}else if (salario <= 700 && salario > 280){
		aumento = salario * 0.15;
		printf("\nO seu aumento é de %.2f: ", aumento);
	}else if (salario <= 1500 && salario > 700){	
		aumento = salario * 0.1;
		printf("\nO seu aumento é de %.2f: ", aumento);
	}else if (salario > 1500){
		aumento = salario * 0.05;
		printf("\nO seu aumento é de %.2f: ", aumento);
	}
	
		novosalario = salario + aumento;
		printf ("O seu novo salário é de R$ %.2f: ",novosalario);
}
