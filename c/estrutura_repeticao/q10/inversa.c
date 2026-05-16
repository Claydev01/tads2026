#include<stdio.h>

int main (){

    int numero;

    printf("Digite  um numero inteiro:");
    scanf("%d", &numero);


    printf("o numero inverso e :");


    if(numero == 0){

        printf("0");
    }


    while(numero > 0){
        int ultimoDigito = numero %10;
        printf("%d",ultimoDigito);
        numero = numero /10;
    }

    printf("\n");
    return 0;
}