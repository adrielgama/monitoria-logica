#include <stdio.h>

int main(){
    int num1, num2, troca;

    scanf("%d %d", &num1, &num2);

    troca = num1;
    num1 = num2;
    num2 = troca;

    printf("Num1: %d\nNum2: %d\n", num1, num2);
    return 0;
}
