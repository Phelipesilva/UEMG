#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Leia um vetor de 12 posi��es e em seguida ler tamb�m dois valores X e Y quaisquer correspondentes a duas posi��es no vetor.
Ao final seu programa dever� escrever a soma dos valores encontrados nas respectivas posi��es X e Y.*/
int main(){
setlocale(LC_ALL, "Portuguese");

    int vetor[12]={0},posicaox,posicaoy,i,soma=0;

    for (i=0; i<12; i++){
        printf("Informe o valor do vetor na posi��o %d: ",i+1);
        scanf("%d", &vetor[i]);
    }
    //considerando que o usuario ira digitar a posi��o adicionada de 1 (Ignorando a posi��o 0)

    printf("Informe a posi��o X para soma: ");
    scanf ("%d", &posicaox);
    printf("Informe a posi��o y para soma: ");
    scanf("%d", &posicaoy);

    soma=vetor[posicaox-1]+vetor[posicaoy-1];

    printf("\nSOMA = %d", soma);

}
