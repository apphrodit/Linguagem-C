/*(4) Desenvolva um programa que leia o nome de uma cidade, o número total de eleitores e o número total de votos apurados na última eleição.
 O programa deverá calcular e exibir a porcentagem de participação dos eleitores desta cidade na última eleição e fazer isso para 5 cidades.*/
 
 #include <stdio.h>
 #include <locale.h>
 
 int main(){
 	setlocale(LC_ALL,"");
 	
 	char cidades[5][30];
 	int te[5], tvotos[5];
 	int i;
 	
 	
	printf("Digite cinco cidades e o número de seus eleitores: ");
		for(i = 0; i < 5; i++){
			scanf("%s",&cidades[i]);
			scanf("%d",&te[i]);
		}
 }
