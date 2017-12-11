#include <stdio.h>

int main(){
    float distancia, velocidade, aceleracao;

    scanf("%f %f %f", &distancia, &velocidade, &aceleracao);

    float tempo = velocidade/aceleracao;

    tempo += distancia/velocidade;

    printf("%.0f\n", tempo);

    return 0;    
}
