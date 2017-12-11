#include <stdio.h>

int main(){
    int mes;

    scanf("%d", &mes);

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        puts("31 dias");
    }
    else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        puts("30 dias");
    }
    else if(mes == 2){
        puts("28 ou 29 dias");
    }
    else { puts("Não existe esse mês"); }

    return 0;
}
