#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int i = 0, j, igual, vet[25];

    srand(time(NULL));

    do{ // fa�a
        vet[i] = rand() % 30; // sorteia um n�mero
        igual = 0;
        for(j = 0; j < i; j++){ // percorre a parte do vetor j� preenchida
            if(vet[j] == vet[i])
                igual = 1; // n�mero repetido
        }

        if(igual == 0) // significa que o elemento n�o se repetiu
            i++;
    }while(i < 25); // enquanto n�o for sorteado 25 n�meros diferentes

    for(i = 0; i < 25; i++){
        printf("%d ", vet[i]);
    }
    printf("\n\n");

    return 0;
}
