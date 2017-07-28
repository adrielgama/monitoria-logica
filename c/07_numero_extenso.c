/*Este código serve para escrever um número por extenso que seja entre 1 a 100; 
 * */
#include <stdio.h>

int main()
{
    int num, resto;

    printf("Digite um número de 1 a 100: ");
    scanf("%d", &num);

    if(num > 100 || num < 1)
    {
        printf("Entrada inválida.\n");
    }
    else
    {
        printf("O número %d por extenso é: ", num);

        if(num == 100)
        {
          printf("cem.\n");
        }
        else
        {
           if(num / 10 == 9)
           {
             resto = num % 10;
             
             if(resto == 0)
               printf("noventa.\n");
             else
               printf("noventa e "); 
           }
           else if (num / 10 == 8)
           {
             resto = num % 10;
             
             if(resto == 0)
               printf("oitenta.\n");
             else
               printf("oitenta e "); 
           }
           else if (num / 10 == 7)
           {
             resto = num % 10;
             
             if(resto == 0)
               printf("setenta.\n");
             else
               printf("setenta e "); 
           }
           else if (num / 10 == 6)
           {
             resto = num % 10;
             
             if(resto == 0)
               printf("sessenta.\n");
             else
               printf("sessenta e "); 
           }
           else if (num / 10 == 5)
           {
             resto = num % 10;
             
             if(resto == 0)
               printf("cinquenta.\n");
             else
               printf("cinquenta e "); 
           }
           else if (num / 10 == 4)
           {
             resto = num % 10;
             
             if(resto == 0)
               printf("quarenta.\n");
             else
               printf("quarenta e "); 
           }
           else if (num / 10 == 3)
           {
             resto = num % 10;
             
             if(resto == 0)
               printf("trinta.\n");
             else
               printf("trinta e "); 
           }
           else if (num / 10 == 2)
           {
             resto = num % 10;
             
             if(resto == 0)
               printf("vinte.\n");
             else
               printf("vinte e "); 
           }
           else if (num / 10 == 1)
           {
             resto = num % 10;

             if(resto == 0)
                 printf("dez.\n");
             else if(resto == 1)
                 printf("onze.\n");
             else if(resto == 2)
                 printf("doze.\n");
             else if(resto == 3)
                 printf("treze.\n");
             else if(resto == 4)
                 printf("quatorze.\n");
             else if(resto == 5)
                 printf("quinze.\n");
             else if(resto == 6)
                 printf("dezesseis.\n");
             else if(resto == 7)
                 printf("dezessete.\n");
             else if(resto == 8)
                 printf("dezoito.\n");
             else
                 printf("dezenove");

             resto = 0;
           }


           //imprimindo valores da unidade
           if(resto == 9)
               printf("nove.\n");

           else if (resto == 8)
               printf("oito.\n");
           
           else if(resto == 7)
               printf("sete.\n");
           
           else if(resto == 6)
               printf("seis.\n");
           
           else if(resto == 5)
               printf("cinco.\n");

           else if(resto == 4)
               printf("quatro.\n");

           else if(resto == 3)
               printf("tres.\n");

           else if(resto == 2)
               printf("dois.\n");

           else if(resto == 1)
               printf("um.\n");
        }
    }

    return 0;
}
