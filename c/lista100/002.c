#include <stdio.h>

int main(){

    float lado, area, perimetro;
    
    scanf("%f", &lado);
    perimetro = lado * 4;

    area = lado * lado;

    printf("\nArea: %.2f\nPerimetro: %.2f\n", area, perimetro);

    return 0;    
}
