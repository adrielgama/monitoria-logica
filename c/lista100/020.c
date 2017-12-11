#include <stdio.h>
#include <math.h>

int main(){
    int prestacoes;
    float valor, entrada, extra;

    puts("Valor: "); scanf("%f", &valor);

    extra = fmod(valor, 10);

    prestacoes = (valor - (fmod(valor, 10))) / 3;

    entrada = ((valor - (fmod(valor, 10)))/3) + extra;

    printf("Valor original: %.2f\nEntrada: %.2f\nPrestações: %d\n", valor, entrada, prestacoes);

    return 0;    
}
