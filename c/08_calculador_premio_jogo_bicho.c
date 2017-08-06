I#include <stdio.h>

int main()
{
    int valor_apostado;
    int n_apostado;
    int n_sorteado;
    int premio;
    int m1, c1, d1, u1;
    int m2, c2, d2, u2;
    int resto;
    
    m1 = m2 = c1 = c2 = d1 = d2 = u1 = u2 = 0;

    printf("Digite o valor da aposta: ");
    scanf("%d", &valor_apostado);
    
    printf("Digite o número da aposta: ");
    scanf("%d", &n_apostado);

    printf("Digite o número sorteado: ");
    scanf("%d", &n_sorteado);

    if(n_apostado < 0 || n_apostado > 99999)
        printf("O número indicado para aposta está incorreto.\n");
    else if (n_sorteado < 0 || n_sorteado > 99999)
        printf("O número indicado como o sorteado está incorreto.\n");
    else
    {
        //separando valores do número apostado
        resto = n_apostado % 10000; //ignorando o 5 dígito.
        m1 = resto / 1000;
        resto = resto % 1000;

        c1 = resto / 100;
        resto = resto % 100;
        
        d1 = resto / 10;
        resto = resto % 10;

        u1 = resto;

        //separando valores do número sorteado
        resto = n_sorteado % 10000; //ignorando o 5 dígito.
        m2 = resto / 1000;
        resto = resto % 1000;

        c2 = resto / 100;
        resto = resto % 100;
        
        d2 = resto / 10;
        resto = resto % 10;

        u2 = resto;

        //iniciando verificação das regras
        if(m1 == m2 && c1 == c2 && d1 == d2 && u1 == u2)
            premio = valor_apostado * 3000;
        else if(c1 == c2 && d1 == d2 && u1 == u2)
            premio = valor_apostado * 500;
        else if(d1 == d2 && u1 == u2)
            premio = valor_apostado * 50;
        else
        {
            int dezena_apostado = d1 * 10 + u1;
            int dezena_sorteado = d2 * 10 + u2;
            
            if(dezena_apostado == 0)
                dezena_apostado = 100;
            
            if(dezena_sorteado == 0)
                dezena_sorteado = 100;
            
            
            int grupo_apostado  = dezena_apostado / 4; //divide por quatro pois é o tamanho de cada grupo
            int grupo_sorteado = dezena_sorteado / 4; 
            
            
            if(dezena_apostado % 4 == 0) //caso o número divida por 4 significa que é o limite do próximo grupo
                grupo_apostado --;
                
            if(dezena_sorteado % 4 == 0)
                grupo_sorteado --;


            if (grupo_apostado == grupo_sorteado)
                premio = valor_apostado * 16;
            else
                premio = 0;
        }

        printf("O número apostado foi: %d e o número sorteado foi: %d. Logo o prêmio foi de %d.\n", n_apostado, n_sorteado, premio);
    }

    return 0;
}
