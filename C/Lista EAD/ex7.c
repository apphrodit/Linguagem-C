/*7. Fa�a um programa que fa�a 5 perguntas para uma pessoa sobre um crime. As perguntas s�o:*/

//a:"Telefonou para v�tima?
//b:"Esteve no local do crime?"
//c:"Mora perto da v�tima?"
//d:"Devia para v�tima?"
//e:"J� trabalhou com a v�tima?"
/*O programa deve no final emitir uma classifica��o sobre a participa��o da pessoa no crime. Se a pessoa responder positivamente a 2 quest�es ela deve ser
classificada como "Suspeita", entre 3 e 4 como"Cumpl�ce" e 5 como "Assassino". Caso contr�rio, ele ser� classificado como "Inocente".*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
	setlocale(LC_ALL,"");
	
	char resp1, resp2, resp3, resp4, resp5;
	int cont, cont1, cont2, cont3, cont4, contt;
	
		printf("Responda as perguntas com S para sim e N para n�o.");
	
		printf("\nTelefonou para v�tima?");
		scanf("%c",&resp1);
	
		cont=0;
		
	if (resp1=='S'){
		cont1=cont +1;
	}else{
		cont1=cont +0;
	}
		printf("\nEsteve no local do crime?");
		scanf("%c",&resp2);
	
	if (resp2=='S'){
		cont2=cont1 +1;
	}else{
		cont2=cont1 +0;
	}
		printf("\nMorava perto da vitima?");
		scanf("%c",&resp3);
	if (resp3=='S'){
		cont3 = cont2+1;
	}else{
		cont3 = cont2+0;
	}
		printf("\nDevia para vitima?");
		scanf("%c",&resp4);
	if (resp4=='S'){
		cont4 = cont3+1;
	}else{
		cont4 = cont3+0;
	}
		printf("\nTrabalhou com a vitima?");
		scanf("%c",&resp5);
	if (resp5=='S'){
		contt = cont4+1;
	}else{
		contt = cont4+0;
	}
	
	if (contt==2){
		printf("\nSuspeita");
	}else if (contt==3 || contt==4){
		printf("\nCumplice");
	}else if (contt==1){
		printf("\nNada a declarar.");
	}else if (contt==5){
		printf("\nAssassino!");
	}else{
		printf("\nNada a declarar.");
	}
}
