#include <stdio.h>

int main(){
    float valor; int cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0;

    scanf("%f", &valor);

    while(valor != 0){  
        if(valor>=100){
            valor -= 100; cem += 1;
        }
        else if(valor >= 50){ 
            valor -= 50; cinquenta += 1;
        }
        else if(valor >= 20){ 
            valor -= 20; vinte += 1;
        }
        else if(valor >= 10){ 
            valor -= 10; dez += 1;
        }
        else if(valor >= 5){
            valor -= 5; cinco += 1;
        }
        else if(valor >= 2){
            valor -= 2; dois += 1;
        }
        else {
            valor -= 1; um += 1;
        }
    }
    
    printf("%d de 100\n%d de 50\n%d de 20\n%d de 10\n%d de 5\n%d de 2\n%d de 1\n", cem, cinquenta, vinte, dez, cinco, dois, um);
    return 0;
}
