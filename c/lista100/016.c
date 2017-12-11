#include <stdio.h>

int main(){
    int numero, centena = 0, dezena = 0;

    scanf("%d", &numero);

    while(numero >= 10){
        if(numero >= 100){
            numero -= 100;
            centena += 1;
        }
        else{
            numero -= 10;
            dezena += 1;
        }
    }

    printf("%d%d%d\n", numero, dezena, centena);

    return 0;
}
