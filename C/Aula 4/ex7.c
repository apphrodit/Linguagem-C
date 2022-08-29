#include <locale.h>

int main(){
	//CONFIGS E VARIAVEIS
	setlocale(LC_ALL,"");	
	int cor, alcool;
	
	printf("Digite a cor do semáforo \n[1.Verde   ]\n[2.Amarelo ]\n[3.Vermelho]\n");
	scanf("%d",&cor);
	printf("Você ingeriu bebida alcoólica? \n"[1.Sim]\n[2.Não]);
	scanf("%d",&cor);
	
	switch (cor){
		case 1:
			printf("Você escolheu verde então pode ir." );
			break;
		case 2:
			printf("Você escolheu amarelo, então fique atento.\n");
			break;
		case 3:
			printf("Você escolheu vermelho, então espere.\n");
			break;
		default:
			printf("Opção Inválida.\n");	
	}
	printf("\nAcabou.");
}
