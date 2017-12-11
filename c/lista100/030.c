#include <stdio.h>

int main(){
    float litros, desconto, valor; char tipo;

    scanf("%f %c", &litros, &tipo);

    if(tipo == 'a'){

        if(litros > 25){
            desconto = 1.90 - (1.90 * 0.04);
        }
        else{
            desconto = 1.90 - (1.90 * 0.02);
        }    

    }
    else{

        if(litros > 25){
            desconto = 2.70 - (2.70 * 0.03);
        }
        else{
            desconto = 2.70 - (2.70 * 0.05);
        }

    }
    valor = litros * desconto;
    printf("Total: %.2f", valor);
    return 0;
}
