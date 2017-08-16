#include<stdio.h>

main()
{   
     char caracter;
     
     printf("Digite um caracter qualquer:\n");
     scanf("%c", &caracter);
     
     if(caracter >= 48 && caracter <= 57)
     {
          printf("%c é um numero.", caracter);
     }
     
     else if(caracter == 65 || caracter == 97 || caracter == 69 || caracter == 101 || caracter == 73 || caracter == 105 || caracter == 79 || caracter == 111 || caracter == 85 || caracter == 117)
     {
          printf("%c é uma vogal.", caracter);
     }
     
     else if((caracter >= 65 && caracter <= 90) || (caracter >= 97 && caracter <= 122))
     {
          printf("%c é uma consoante.", caracter);
     }
     
     else
     {
          printf("%c é um simbolo.");
     }
     
     printf("\n");
}
