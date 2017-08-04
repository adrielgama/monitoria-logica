#include <stdio.h>

int main()
{
    int base;
    int expoente;
    long potencia = 1;

    printf("Digite a base e o expoente a ser calculado (Ex: base^expoente): ");
    scanf("%d^%d", &base, &expoente);
    
    for(int i = 1; i <= expoente; ++i)
    {
        potencia = potencia * base;
    }

    printf("A potencia de %d^%d é: %d\n", base, expoente, potencia);

    return 0;
}
