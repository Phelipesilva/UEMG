#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Fa�a um programa que solicite ao usu�rio para digitar valores num�ricos inteiros positivos.
Encerre a entrada de dados quando for digitado um n�mero negativo ou zero. Calcule a m�dia dos n�meros positivos digitados.*/
int main(){
setlocale(LC_ALL, "Portuguese");

    int n=1;
    float media=0,soma=0,q=0;

    while (n>0){
        printf("Informe um numero: ");
        scanf("%d", &n);
        if (n>0){
            soma=soma+n;
            q++;
        }
    }
    media=soma/q;
    printf("MEDIA = %.2f",media);

}
