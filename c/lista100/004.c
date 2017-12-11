#include <stdio.h>

int main(){

    float lado1, lado2, lado3, perimetro;

    scanf("%f %f %f", &lado1, &lado2, &lado3);

    perimetro = lado1 + lado2 + lado3;

    printf("\nPerimetro: %.2f\n", perimetro);

    return 0;
    
}
