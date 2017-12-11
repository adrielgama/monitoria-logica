#include <stdio.h>

int main(){
    float nota1, nota2;

    scanf("%f %f", &nota1, &nota2);

    float bimestre1 = (nota1 + nota2)/2;

    scanf("%f %f", &nota1, &nota2);

    float bimestre2 = (nota1 + nota2)/2;

    float media = (bimestre1 + bimestre2)/2;

    printf("\nMedia semestral: %.2f\n", media);

    return 0;
}
