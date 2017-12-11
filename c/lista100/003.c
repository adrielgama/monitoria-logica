#include <stdio.h>

int main(){
    
    float raio, area, perimetro;

    scanf("%f", &raio);

    area = 3.14 * (raio*raio);

    perimetro = 2 * 3.14 * raio;

    printf("\nArea: %.2f\nPerimetro: %.2f\n", area, perimetro);

    return 0;
}
