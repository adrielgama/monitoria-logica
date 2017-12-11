#include <stdio.h>

int main(){
    
    float idade, anos, meses;

    scanf("%f", &idade);

    anos = idade/365;
    meses = idade/30;
    
    printf("\nAnos: %.0f\nMeses: %.0f\nDias: %.0f\n", anos, meses, idade);
    return 0;
}
