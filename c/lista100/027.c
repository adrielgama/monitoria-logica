#include <stdio.h>

int main(){
    float num1, num2, num3, media = 0, maior;

    scanf("%f %f %f", &num1, &num2, &num3);

    maior = num1;

    if(num2 > maior){
        maior = num2;
    }
    if(num3 > maior){
        maior = num3;
    }

    media += maior * 5;

    if(num1 != maior){
        media += num1 * 2.5;
    }

    if(num2 != maior){
        media += num2 * 2.5;
    }

    if(num3 != maior){
        media += num3 * 2.5;
    }

    media /= 10;

    printf("Media: %.2f", media);

    return 0;
}
