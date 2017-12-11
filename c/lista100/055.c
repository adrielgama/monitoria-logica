#include <stdio.h>

int main(){
    int num1, num2, soma1 = 0, soma2 = 0;
    scanf("%d %d", &num1, &num2);
    for(int i = 1; i<num1; i++){
        if(num1%i == 0)
            soma1 += i;
    }

    for(int i = 1; i<num2; i++){
        if(num2%i == 0)
            soma2 += i;
    }

    if((soma1 == num2) && (soma2 == num1))
        printf("São amigos\n");
    else
        printf("Não são amigos\n");
    return 0;
}
