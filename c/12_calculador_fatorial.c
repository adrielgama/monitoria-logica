#include <stdio.h>

int main()
{
    int numero;
    long fatorial = 1;

    printf("Digite o número: ");
    scanf("%d", &numero);
    

    for(int i = 1; i <= numero; ++i)
    {
        fatorial*= i;
    }

    printf("O fatorial de %d! é: %d\n", numero, fatorial);

    return 0;
}
