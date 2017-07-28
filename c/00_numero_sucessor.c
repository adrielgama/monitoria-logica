#include <stdio.h>

int main()
{
    int num;

    printf("Digite numero inteiro: ");
    scanf("%d", &num);

    printf("O sucessor de número %d é %d.\n", num, num + 1);
    
    return 0;
}
