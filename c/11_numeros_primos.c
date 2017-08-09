#include <stdio.h>


int main()
{
    //Usamos long int para obter números maiores. 
    //E o unsigned é para aumentar ainda mais este número, visto que os números verificados vão ser maiores que 0.
    unsigned long int num = 1;
    unsigned long int num_aux;
    unsigned long count_div;
    unsigned long quantidade;

    printf("Digite a quantidade de numeros primos que serao exibidos: ");
    scanf("%ld", &quantidade);
    
    //verifica se a quantidade digitada é maior do que zero, caso não seja, finaliza o programa.
    if(quantidade <= 0)
    {
        printf("Entrada inválida! \n");
        return 1;
    }
    
    //loop que define a quantidade de números primos que serão exibidos
    while (quantidade > 0)
    {
            count_div = 0;
            num_aux = num;

            //loop que verifica para cada número, quantos divisores eles possuem
            while (num_aux >= 1)
            {
                if(num % num_aux == 0)
                    count_div++;

                num_aux--;
            }

            //verifica se o número é primo, caso seja, imprime o número e
            //decrementa a quantidade de números que foram exibidos
            if(count_div == 2){
                printf("%d - ", num);
                quantidade--;
            }

            num ++;
    }

    printf("\n");

    return 0;
} 
