#include <stdio.h>
#include <math.h>

int main()
{
    long num, original;
    int exp = 0;

    printf("Digite um número inteiro qualquer: ");
    scanf("%ld", &num);
    
    while(num - pow(2, exp) > 0)
    {
        ++exp;
    }
    
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

    return 0;
}
