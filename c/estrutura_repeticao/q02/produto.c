#include<stdio.h>

int main(){
     // double para numeros astronomicos
    double produto =1.0;

    for (int i =1 ; i <=100; i++){
        produto*=i;
    }
    printf(" O produto do numeros de 1 a 100 e : %e \n", produto);

    return 0;
}