#include <stdio.h>

int main()
{
    int dia, mes, ano;
    
    printf("Por favor, digite uma data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    
    printf("\n A estação do ano é: ");
    switch(mes)
    {
        case 3:
        case 4:
        case 5:
            {
                printf("Outono.\n");
                break;
            }            
            
        case 6:
        case 07:
        case 8:
            {
                printf("Inverno.\n");
                break;
            }
        case 9:
        case 10:
        case 11:
            {
                printf("Primavera.\n");
                break;
            }
        case 12:
        case 1:
        case 2:
            {
                printf("Verão.\n");
                break;
            }
        
        default:
            {
                printf("\n Entrada digitada está incorreta.\n");
                break;
            }
    }
    
    return 0;
}
