#include <stdio.h>

int main(){
    
    int num1, num2, resto;
    float quociente;

    scanf("%d %d", &num1, &num2);

    quociente = num1 / num2;
    resto = num1 % num2;

    printf("\nQuociente: %.2f\nResto: %d\n", quociente, resto);

    return 0;
}
