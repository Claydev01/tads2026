#include<stdio.h>

int main(){

    int notas;
    int aprovados=0;

    for(int i=1; i<=5 ; i++){
        printf("Digite a nota do aluno %d: ",i);
        scanf("%d",&notas);
        

        if(notas >= 6){
            printf("Aluno aprovado \n");
            aprovados=aprovados+1; 
        }else{
            printf("Aluno reprovado \n");
        }

        printf(" total de alunos aprovados: %d \n",aprovados);

    }
    return 0;
}