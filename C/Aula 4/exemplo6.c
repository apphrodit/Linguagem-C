#include <stdio.h>
#include <locale.h>

int main(){
	//CONFIGS E VARIAVEIS
	setlocale(LC_ALL,"");	
	int cor;
	
	printf("Digite a cor do sem�foro \n[1.Verde   ]\n[2.Amarelo ]\n[3.Vermelho]\n");
	scanf("%d",&cor);
	
	switch (cor){
		case 1:
			printf("Voc� escolheu verde ent�o pode ir." );
			break;
		case 2:
			printf("Voc� escolheu amarelo, ent�o fique atento.\n");
			break;
		case 3:
			printf("Voc� escolheu vermelho, ent�o espere.\n");
			break;
		default:
			printf("Op��o Inv�lida.\n");	
	}
	printf("\nAcabou.");
}
