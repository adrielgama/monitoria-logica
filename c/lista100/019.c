#include <stdio.h>

int main(){
    float a, b, result;

    puts("Valor de A: "); scanf("%f", &a);
    puts("Valor de B: "); scanf("%f", &b);

    result = b/a;

    printf("Resultado: %.2f", result);

    return 0;
}
