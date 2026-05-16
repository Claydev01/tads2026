#include<stdio.h>

int main(){
float altura,menor ;

    printf("Digita primeira altura: \n");
    scanf("%f",&altura);


    if(altura ==0){
        printf("programa encerrado \n");
    }

    menor=altura;

    while(altura != 0){
        if(altura < menor){
            menor=altura;
        }

        printf("Digite a altura ou 0 para encerrar : \n");
        scanf("%f",&altura);
    }

    printf("A menor altura digitada e: %.2f \n", menor);
  return 0;
}