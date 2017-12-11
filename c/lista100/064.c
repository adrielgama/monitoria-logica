#include <stdio.h>

int main(){
    int maior, menor, array[20];
    for(int i = 0; i<20; i++)
        scanf("%d", &array[i]);
    maior = array[0];
    menor = array[0];
    for(int i = 0; i<20; i++){
        if(array[i] > maior)
            maior = array[i];
        if(array[i] < menor)
            menor = array[i];
    }
    printf("%d %d", maior, menor);
    return 0;
}
