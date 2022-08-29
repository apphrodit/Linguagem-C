#include <stdio.h>
#include <locale.h>


	int main (){
		setlocale(LC_ALL,"");

		float salario, inssReal, inssPorcento, salfinal;
		printf("Digite o seu salário: ");
		scanf("%f",&salario);
		
		if(salario<=1212){
			inssPorcento = 7,5/100;
		}
		//Calculo do INSS
		
		}else if{(salario <2427.36){
			inssPorcento = 9/100;
			inssReal = salario * inssPorcento;
		}else if{(salario <3641.04){
			inssPorcento = 12/100
			inssReal = salario * inssPorcento;
		}else if{ (salario <7087.23){
			inssPorcento = 14/100
			inssReal = salario * inssPorcento;
		}else{
			inssPorcento = 7087.23*inssPorcento;
			inssReal = inssPorcento;
			
			}
			salfinal = salario + inss Real
		printf("O desconto do INSS será de R$%.2f\n",inssReal);
		printf("O salário será %.2f", salario - inssReal);
}
