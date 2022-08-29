#include <stdio.h>
#include <locale.h>


	int main (){
		setlocale(LC_ALL,"");
		
		float salario,salfamilia = 0;
		int filhos;
		
	printf("Digite seu salário: ");
	scanf("%f",&salario);
	printf("Quantos filhos você tem ?: ");
	scanf("%d",&filhos);
	
	if (salario < 1655.98){
		salfamilia = 56.47* filhos;
		
	}
	
	printf("O seu salário R$%.2f \n",salario);
	printf("O salário família é R$%.2f\n",salfamilia);
	printf("O Salário final será %.2f:",salario + salfamilia);
	}
