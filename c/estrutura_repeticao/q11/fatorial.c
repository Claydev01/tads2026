#include<stdio.h>


int main(){

    int n;
    unsigned long long fatorial =1;

    printf("digite um numero inteiro:");
    scanf("%d", &n);

    if( n<0){

        printf(" o fatorial nao exite em numero negativos : \n");

    }else{

        for(int i=1; i<=n; i++){
            fatorial *=i;

        }
         
        printf(" o fatorial de %d e : %llu \n",n, fatorial);

    }

   return 0;

}