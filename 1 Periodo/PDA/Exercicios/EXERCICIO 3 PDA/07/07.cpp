#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Solicitar uma sequ�ncia de 20 n�meros e mostrar quantos s�o pares.*/
int main(){
setlocale(LC_ALL, "Portuguese");

    int i,pares=0,numero[20]={0};

    for (i=0; i<20; i++){
        printf ("Informe um numero: ");
        scanf("%d", &numero[i]);
        if(numero[i]%2==0){
            pares++;
        }
    }
    printf("\nQUANTIDADE DE NUMEROS PARES = %d ", pares);

}
