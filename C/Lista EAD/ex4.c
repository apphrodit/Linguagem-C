/*4. As organiza��es Tabajara resolveram dar um aumento de sal�rio aos seus colaboradores e lhe contrataram para desen-
-volver o programa que calcular� os reajustes. Fa�a um programa que recebe o sal�rio de um colaborador e o reajuste
segundo o seguinte crit�rio, baseado no sal�rio atual:
*/

// sal�rios at� R$ 280,00 (incluindo): aumento de 20%
// sal�rios entre R$ 280,00 e R$ 700,00: aumento de 15%
// sal�rios entre R$ 700,00 e R$ 1500,00: aumento de 10%
// sal�rios de R$ 1500,00 em diante: aumento de 5%

//APOS O AUMENTO SER REALIZADO, INFORME NA TELA

// o sal�rio antes do reajuste; x
// o percentual de aumento aplicado; x 
// o valor do aumento;
// o novo sal�rio, ap�s o aumento;


#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	float salario,novosalario, aumento;
	
	printf("Digite o sal�rio do colaborador: ");
	scanf("%f",&salario);
	
	printf("O seu sal�rio antes do reajuste � de : %.2f",salario);


	if (salario<280){
		printf("\n O percentual do seu aumento � de 20%%");
	}else if (salario <= 700 && salario> 280){
		printf("\n O percentual do seu aumento � de 15%%");
	}else if (salario <= 1500 && salario > 700){
		printf ("\n O percentual do seu aumento � de 10%%");
	}else if (salario > 1500){
		printf ("\n O percentual do seu aumento � de 5%%");
	}else{
		printf ("\n S�lario incorreto. ");
	}
	
	if (salario <= 280){
		aumento = salario * 0.2;
		printf("O seu aumento � de %.2f: ", aumento);
	
	}else if (salario <= 700 && salario > 280){
		aumento = salario * 0.15;
		printf("\nO seu aumento � de %.2f: ", aumento);
	}else if (salario <= 1500 && salario > 700){	
		aumento = salario * 0.1;
		printf("\nO seu aumento � de %.2f: ", aumento);
	}else if (salario > 1500){
		aumento = salario * 0.05;
		printf("\nO seu aumento � de %.2f: ", aumento);
	}
	
		novosalario = salario + aumento;
		printf ("O seu novo sal�rio � de R$ %.2f: ",novosalario);
}
