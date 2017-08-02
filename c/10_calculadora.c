#include <stdio.h>

int main()
{
    float num1, num2;
    int opc;
    
    printf("Digite o 1º número: ");
    scanf("%f", &num1);

    printf("Digite o 2º número: ");
    scanf("%f", &num2);
    
    printf("\n\nDigite 1 para somar os números;\n");
    printf("Digite 2 para subtrair os números;\n");
    printf("Digite 3 para multiplicar os números;\n");
    printf("Digite 4 para dividir os números;\n");
    
    scanf("%d",&opc);
    
    switch(opc)
    {
        case 1:
            printf("A soma do número %.0f + %.0f é: %f\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("A subtração do número %.0f - %.0f é: %f\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("A multido número %.0f x %.0f é: %f\n", num1, num2, num1 * num2);
            break;
        case 4:{
                    if(num2 == 0)
                        printf("Operação inválida. O divisor não pode ser 0.\n");
                    else
                        printf("A soma do número %.0f + %.0f é: %f\n", num1, num2, num1 / num2);
                    break;
                }
        default: 
            printf("Opção inválida!\n");      
    }

    return 0;
}
