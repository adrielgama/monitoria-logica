#include <stdio.h>

int main(){
    int num1, num2, num3, menor, total = 0;

    scanf("%d %d %d", &num1, &num2, &num3);

    menor = num1;

    if(num2 < menor){
        menor = num2;
    }
    else if(num3 < menor){
        menor = num3;
    }

    if(num1 != menor){
        total += num1;
    }
    
    if(num2 != menor){
        total += num2;
    }

    if(num3 != menor){
        total += num3;
    }

    printf("Soma: %d", total);
    return 0;
}
