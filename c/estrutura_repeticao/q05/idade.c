#include<stdio.h>

int main(){

    int idade;
    int soma=0;
    float media;

    for( int i=0; i<=20; i++){
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d",&idade);
        soma += idade;
    }

    media = (float)soma/20;
    printf("A media de idade das 20 pessoas e: %.2f",media);


    return 0;

}