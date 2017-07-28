#include <stdio.h>

int main()
{
    int celsius;
    int farenheit;

    printf("Digite temperatura em Celsius: ");
    scanf("%d", &celsius);

    farenheit = (9*celsius+160)/5;

    printf("A temperatura %d°C em Farenheit é: %d.\n", celsius, farenheit);

    return 0;
}
