#include <stdlib.h>
#include <stdio.h>

/* Fa�a um programa que leia dois vetores (A e B) de cinco posi��es de n�meros inteiros. O programa
deve, ent�o. subtrair o primeiro elemento de A do �ltimo de B, acumulando o valor, subtrair o segundo
elemento de A do pen�ltimo de B, acumulando o valor e assim por diante. Mostre o resultado da soma
de todas as subtra��es. */

int main(int argc, char** argv) {
	
	int vetora[5]{15,5,3,0,3};
	int vetorb[5]{3,0,1,2,1};
	int	vetorc[5];
	int i,soma=0;	
	
	for (i=0; i<5; i++){
		vetorc[i]=vetora[i]-vetorb[4-i];
		printf("\nVetor C na posicao %d = %d",i+1,vetorc[i]);
	}
	for (i=0; i<5; i++){
		soma=vetorc[i]+soma;
	}
	printf ("\nSOMA= %d", soma);
	return 0;
}
