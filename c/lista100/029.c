#include <stdio.h>

int main(){
    float salario, desconto;

    scanf("%f", &salario);

    desconto = salario * 0.11;

    if(desconto >= 334.29){
        puts("Desconto acima do valor máximo. Operação não efetuada.");
    }
    else{
        printf("Desconto: %.2f", desconto);
    }

    return 0;
}
