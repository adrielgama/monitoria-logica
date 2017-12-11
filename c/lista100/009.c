#include <stdio.h>

int main(){
    float raio, altura, volume;

    scanf("%f %f", &raio, &altura);

    volume = 3.14 * (raio*raio) * altura;

    printf("\nVolume: %.2f\n", volume);

    return 0;
}
