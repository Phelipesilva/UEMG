#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Fa�a um programa que leia dois vetores de dez posi��es e fa�a a multiplica��o dos elementos de mesmo
//�ndice colocando o resultado em um terceiro vetor. Mostre o vetor resultante

int main(){
    setlocale (LC_ALL, "Portuguese");

    int vetor1[10], vetor2[10], vetor3[10], i;

    for (i=0; i<10; i++){
        printf("Informe o valor do vetor 1 na posi��o %d: ", i+1);
        scanf("%d", &vetor1[i]);
        printf("Informe o valor do vetor 2 na posi��o %d: ", i+1);
        scanf("%d", &vetor2[i]);
    }

    for (i=0; i<10; i++){
        vetor3[i]=vetor1[i]*vetor2[i];
        printf("\nVetor 3 na posi��o %d: %d * %d = %d", i+1, vetor1[i], vetor2[i], vetor3[i]);
    }

}
