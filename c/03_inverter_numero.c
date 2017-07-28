#include <stdio.h>

int main ()
{
    int num;
    int m, c, d, u; //variaveis que representam as casas decimais
    int resto;

    m = 0; 
    c = 0;
    d = 0;
    u = 0;

    printf("Digite um número entre 1000 e 9999: ");
    scanf("%d", &num);

    m = num / 1000; //obtem o coeficiente de num / 1000, ex: 1002/1000 -> m = 1
    resto = num % 1000; //obtem o resto de num / 1000, ex: 1002/1000 -> resto = 2

    c = resto / 100;
    resto = resto % 100;
    
    d = resto / 10;
    resto = resto % 10;
    
    u = resto;

    printf("O numero %d invertido é %d%d%d%d\n\n >>> FIIM\n\n\n", num, u, d, c, m);

    return 0;
}
