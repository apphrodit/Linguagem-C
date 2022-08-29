/*5. Faça um programa que calcule as raizes de uma equação do segundo grau, na forma ax2 + bx +c.
O programa deverá pedir os valores de a,b e c, e fazer as consistências, informando ao usuário nas seguintes
situações:
*/

/* Se o usuário informar o valor de A igual a zero, a equação não é do segundo grau e o programa não 
deve fazer pedir os demais valores, sendo encerrado.
*/


#include <stdio.h>
#include <locale.h>
#include <math.h>
int main (){
	setlocale(LC_ALL,"");

	float a,b,c,delta,raiz1,raiz2;
	
	printf("Digite o valor de A: ");
	scanf("%f", &a);

	printf("Digite o valor de B: ");
	scanf("%f", &b);

	printf("Digite o valor de C: ");
	scanf("%f", &c);

	if (a !=0){
		delta = (b*b) - 4*a*c;
		
	if(delta == 0){
		raiz1 = (-b + sqrt (delta)) / (2*a);
		printf ("\n O delta deu 0.");
		printf ("\n As raízes serão iguais a: %.2f", raiz1);
	}else{
		if (delta > 0){
			raiz1 = (-b + sqrt (delta)) / (2*a);
			raiz2 = (-b - sqrt (delta)) / (2*a);
			printf("O delta é maior do que 0!");
			printf("\n A primeira raiz é igual a: %.2f", raiz1);
			printf("\n A segunda raiz é igual a: %.2f", raiz2);
	}else {
		printf("\n Delta é menor do que 0.\n");
		printf("\n Não existem raízes reais.");
	}
}
	}else{
		printf("Essa é uma equação de segundo grau.");
		printf("Tente Novamente.");
		printf("Tenta um número diferente de 0.");
	}
}
