#include <stdio.h>

int main()
{

    int num, resto;
    int bit1, bit2, bit4, bit8, bit16;

    bit1 = bit2 = bit4 = bit8 = bit16 = 0; //apenas inicializando variveis com zero

    printf("Digite um número menor que 32: ");
    scanf("%d", &num);

    if(num < 32)
    {
        resto = num;
     
        if(resto - 16 >= 0)
        {
            resto = resto - 16;
            bit16 = 1;
        }

        if(resto - 8 >= 0)
        {
            resto = resto - 8;
            bit8 = 1;
        }
        
        if(resto - 4 >= 0)
        {
           resto = resto - 4;
           bit4 = 1;
        }

        if(resto - 2 >= 0)
        {
           resto = resto - 2;
           bit2 = 1;
        }

        if(resto - 1 >= 0)
        {
           resto = resto - 1;
           bit1 = 1;
        }

        printf("O numero %d em binario eh: %d%d%d%d%d.\n", num, bit16, bit8, bit4, bit2, bit1);
    }
    else
    {
        printf("O numero digitado eh maior que 32.\n");
    }

    return 0;
}
