/*(4) Desenvolva um programa que leia o nome de uma cidade, o n�mero total de eleitores e o n�mero total de votos apurados na �ltima elei��o.
 O programa dever� calcular e exibir a porcentagem de participa��o dos eleitores desta cidade na �ltima elei��o e fazer isso para 5 cidades.*/
 
 #include <stdio.h>
 #include <locale.h>
 
 int main(){
 	setlocale(LC_ALL,"");
 	
 	char cidades[5][30];
 	int te[5], tvotos[5];
 	int i;
 	
 	
	printf("Digite cinco cidades e o n�mero de seus eleitores: ");
		for(i = 0; i < 5; i++){
			scanf("%s",&cidades[i]);
			scanf("%d",&te[i]);
		}
 }
