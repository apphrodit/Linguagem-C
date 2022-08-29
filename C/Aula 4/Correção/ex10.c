#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	int n1, n2, n3;
	float media;
	
	printf("Digite as três notas do aluno: ");
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);

	media  = (n1+n2+n3)/3;
	if (media >=6){
		printf("Sua média é %.1f você foi aprovado", media);
	}else if (media>=4){
		printf("Sua média é %.1f você está em recuperação",media);
	}else{
		printf ("Sua média é %.1f você está reprovado", media);
	}
}
