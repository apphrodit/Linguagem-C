#include <stdio.h>
#include <locale.h>


	int main (){
		setlocale(LC_ALL,"");
		
		float salario,salfamilia = 0;
		int filhos;
		
	printf("Digite seu sal�rio: ");
	scanf("%f",&salario);
	printf("Quantos filhos voc� tem ?: ");
	scanf("%d",&filhos);
	
	if (salario < 1655.98){
		salfamilia = 56.47* filhos;
		
	}
	
	printf("O seu sal�rio R$%.2f \n",salario);
	printf("O sal�rio fam�lia � R$%.2f\n",salfamilia);
	printf("O Sal�rio final ser� %.2f:",salario + salfamilia);
	}
