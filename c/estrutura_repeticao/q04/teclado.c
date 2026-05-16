#include<stdio.h>

int main(){
    
    int v1,v2;

    printf("Digite o primeiro valor:");
    scanf("%d",&v1);

    printf("Digite o segundo valor %d:",v1);
    scanf("%d",&v2);

    while(v2<=v1){
        printf("O segundo valor deve ser maior que o primeiro.\n");
        printf("Digite o segundo valor:");
        scanf("%d",&v2);


    }
        printf("Sucesso o segundo valor de v2 e maior que o primeiro: %d e %d \n",v1,v2);

        return 0;

}