#include<stdio.h>

int main(){

    int idade;
    int soma=0;
    int contador=0;
    float media;

    printf("Digite a primeira idade: \n");
    scanf("%d",&idade);

    while(idade != -1){
        soma =soma+idade;
        contador=contador+1;


        printf("Digite a proxima idade: ");
        scanf("%d",&idade);

    }

    if(contador >0){

        media=(float)soma/contador;
        printf("\n A media das %d  idades e: %.2f \n", contador, media);


    }else{

        printf("nenhuma idade foi digitada. \n");
    }

    return 0;
}