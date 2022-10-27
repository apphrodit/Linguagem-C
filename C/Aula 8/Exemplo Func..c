#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (int argc, char *argv[]) {
	//int resultado = somar();
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	//printf("Resultado - %d", resultado);
	printf("Resultado - %d", somar(a, b));
	
	return 0;
}

void somar(int a, int b) {
	printf("%d", (a+b));
}

bool calcularMedia(float n1, float n2){
	float
}
