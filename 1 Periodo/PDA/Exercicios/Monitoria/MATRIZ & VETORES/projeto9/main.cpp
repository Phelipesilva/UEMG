#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Fa�a um programa que leia um vetor de 15 posi��es com n�meros inteiros. Crie, a seguir. um vetor
resultante que contenha todos os n�meros primos do vetor digitado. Escreva o vetor resultante.*/

int main(){
    setlocale (LC_ALL,"Portuguese");

    int vetor[10]={1,8,0,9,12,3,6,5,17,19};
    int vetor2[4]={3,5,7,9},i,j,cnt,vetorR[10];

    for (i=0; i<10; i++){
        if (vetor[i]==1||vetor[i]==2){
            printf("Vetor na posi��o %d eh primo = %d\n", i+1,vetor[i]);
        }
        else if (vetor[i]%2!=0){
            for (j=0; j<4; j++){
                if ((vetor[i]%vetor2[j]==1)&&(vetor[i]%vetor2[j]==vetor[i]))
                    cnt++;
            }
	    if (cnt=2);
	    vetorR[i]=vetor[i];
	    printf("Vetor na posi�ao %d eh primo = %d\n", i+1,vetorR[i]);
        }
    }
    return 0;
}

