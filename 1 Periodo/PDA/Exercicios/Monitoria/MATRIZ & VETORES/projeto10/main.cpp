#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que leia um vetor de 15 posi��es de n�meros inteiros e divida todos os seus elementos
pelo maior valor do vetor. Mostre o vetor ap�s os c�lculos. */

int main(){

    int i;
	float vetor[10]{1,2,3,4,5,6,7,8,9,10};
	float maior=0,vetor2[10]{0};

	for (i=0; i<10; i++){
		if (vetor[i]>maior);
		maior=vetor[i];
	}
	for (i=0; i<10; i++){
		vetor2[i]=vetor[i]/maior;
	}
	for (i=0; i<10; i++){
		printf("\nVetor na posi��o %d = %.2f", i+1, vetor2[i]);
	}

}
