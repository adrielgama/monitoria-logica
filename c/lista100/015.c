#include <stdio.h>

int main(){
    float usuario_altura, predio_altura, predio_sombra, usuario_sombra, sombra_total;

    scanf("%f %f %f", &predio_sombra, &usuario_sombra, usuario_altura);

    sombra_total = predio_sombra/usuario_sombra;

    predio_altura = sombra_total * usuario_altura;

    printf("%.2f", predio_altura);

    return 0;
}
