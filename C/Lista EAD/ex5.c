/*5. Fa�a um programa que calcule as raizes de uma equa��o do segundo grau, na forma ax2 + bx +c.
O programa dever� pedir os valores de a,b e c, e fazer as consist�ncias, informando ao usu�rio nas seguintes
situa��es:
*/

/* Se o usu�rio informar o valor de A igual a zero, a equa��o n�o � do segundo grau e o programa n�o 
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
		printf ("\n As ra�zes ser�o iguais a: %.2f", raiz1);
	}else{
		if (delta > 0){
			raiz1 = (-b + sqrt (delta)) / (2*a);
			raiz2 = (-b - sqrt (delta)) / (2*a);
			printf("O delta � maior do que 0!");
			printf("\n A primeira raiz � igual a: %.2f", raiz1);
			printf("\n A segunda raiz � igual a: %.2f", raiz2);
	}else {
		printf("\n Delta � menor do que 0.\n");
		printf("\n N�o existem ra�zes reais.");
	}
}
	}else{
		printf("Essa � uma equa��o de segundo grau.");
		printf("Tente Novamente.");
		printf("Tenta um n�mero diferente de 0.");
	}
}
