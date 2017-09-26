#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char cifra [] = {"qwertyuiopzxcvbnmasdfghjkl"};
    int opcao;
    int sair = 0;
    char mensagem[501];

    printf("##### Bem vindo ao Enigma #####");
    
    do
    {
        printf("\n\nMenu de Opções: \n");
        printf("1- Crifrar mensagem;\n");
        printf("2- Descifrar mensagem;\n");
        printf("3- Exibir a cifra;\n");
        printf("Qualquer outra tecla para sair...\n\n");

        printf("#Opção: ");
        opcao = getchar();

        switch(opcao)
        {
            case '1':
            case '2':
                     {
                       printf("Digite a mensagem: ");
                       gets(mensagem);


                       //Loop para colocar string UpperCase
                       for(int i = 0; i < sizeof(mensagem); i++)
                           if(mensagem[i] >= 'a' && mensagem[i] <= 'z')
                               mensagem[i] -= 'a' - 'A';
                        

                        printf(">>>>>%s<<<<", mensagem);
                        break;
                     }
            case '3': {
                        printf("\nA cifra cadastrada é: ");
                        printf("%s", cifra);
                        break;
                      } 
        
            default:{
                        printf("\nAté a próxima :) \n");
                    }
        }

    
    }while(opcao != EOF);

    return 0;
}
