#include <stdio.h>
#include <math.h>

int main()
{
    int num, original;
    int exp = 4;

    printf("Digite um número menor que 32: ");
    scanf("%d", &num);

    if(num < pow(2, exp + 1))
    {
        original = num;
        printf("O numero %d em binario eh: ", original);
     
        while(exp >= 0)
        {
            if((num - pow(2, exp)) >= 0)
            {      
                num = num - pow(2,exp);    
                printf("1");
            }
            else
            {
                printf("0");
            }
            exp = exp - 1;
        }

        printf("\n");
    }
    else
    {
        printf("O numero digitado eh maior ou igual a 32.\n");
    }

    return 0;
}
