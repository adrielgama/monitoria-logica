#include <stdio.h>

int main(){
    float temperatura, celsius;

    scanf("%f", &temperatura);

    celsius = (5.0/9)*(temperatura-32);

    printf("\nCelsius: %.2f\n", celsius);

    return 0;
}
