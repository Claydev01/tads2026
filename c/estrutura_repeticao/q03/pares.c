#include<stdio.h>

int main(){


    int soma =0;

    for (int i=2; i<=500; i+=2){
        soma+=i;
    }

    printf(" A soma dos números pare de 1 a 500 e: %d", soma);
    return 0;


}