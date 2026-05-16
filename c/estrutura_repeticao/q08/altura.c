#include<stdio.h>


int main(){

    float altura, somaAlturaM=0, media;
    char sexo;
    int contM=0;

    for(int i = 1; i <=5 ; i++){
        printf("Pessoa %d- Digite o sexo (M/f): ",i);
        scanf(" %c",&sexo);

        printf("Pessoa %d - Digite a altura: ",i);
        scanf("%f", &altura);

        if(sexo =='F'|| sexo=='f'){
            somaAlturaM+=altura;
            contM++;
          }

        }
     
        if(contM > 0){
            media=somaAlturaM/contM;
            printf("\n A altura media das %d mulheres e: %.2f \n",contM, media);


          }else{
               printf("\n A Nenhuma mulher foi cadastrada \n");

        
    }
    return 0;

}