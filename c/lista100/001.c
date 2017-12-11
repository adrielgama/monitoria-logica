#include <stdio.h>

int main(){

    float base, altura, area, perimetro;

    scanf("%f %f", &base, &altura);

    area = (base * altura)/2;

    perimetro = 2*base + 2*altura;

    printf("\nArea: %.2f\nPerimetro: %.2f\n", area, perimetro);

    return 0;    
    
}
