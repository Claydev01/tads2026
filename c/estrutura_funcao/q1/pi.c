#include <stdio.h>
#include <math.h> 

#define PI 3.14159

void volumeEsfera(double raio);

int main(){

    double raioUsuario;

    printf("Digite o valor do raio :");
    scanf("%lf", &raioUsuario);

    volumeEsfera(raioUsuario);


    return 0;

}

void volumeEsfera(double raio){
    double volume;

    volume = (4.0/3.0)* PI * (raio *raio* raio);

    printf("\n  O volume da esfera com raio %.2f e : %.2f \n", raio,volume);


}