#include <stdio.h>

int main(){
    float chico = 1.5, ze = 1.1;
    int ano = 0;

    while(chico >= ze){
        chico += 0.02;
        ze += 0.03;
        ano += 1;
    }

    printf("%d\n", ano);
    return 0;
}
