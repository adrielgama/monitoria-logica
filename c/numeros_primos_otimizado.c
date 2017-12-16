#include <stdio.h>
#include <time.h> //Utilizamos esta biblioteca para contabilizar o tempo de execução do programa.

int main()
{
    clock_t cron_inicial;
    clock_t cron_final;
    float tempo_execucao;


    //Usamos long int para obter números maiores. 
    //E o unsigned é para aumentar ainda mais este número, visto que os números verificados vão ser maiores que 0.
    unsigned long int num = 2; //começamos com 2, pois 1 não é primo.
    int count_div;
    unsigned long quantidade;
   
    printf("Digite a quantidade de numeros primos que serao exibidos: ");
    scanf("%ld", &quantidade);
    
    cron_inicial = clock();
    
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

        //números pares, maior que dois não são primos, por isso não precisamos testá-los
        if(num > 2 && num % 2 == 0)
        {
            num++;
            continue;
        }

        //loop que verifica para cada número, quantos divisores eles possuem
        for(int i = 2; i < num; i++)
        {
            if(num % i  == 0)
            {
                count_div++;

                if(count_div > 0)
                    break;
            }
        }

        //verifica se o número é primo, caso seja, imprime o número e
        //decrementa a quantidade de números que foram exibidos
        if(count_div == 0)
	    {
            quantidade--;

            printf("%d", num);

            if(quantidade >  0)
                printf(" -");

        }

        num ++;        
    }

    printf("\n");

    cron_final = clock();

    tempo_execucao = (cron_final - cron_inicial) * 1000/CLOCKS_PER_SEC;
    printf("\n # Tempo de execução: %.0f ms \n", tempo_execucao);

    return 0;
} 
