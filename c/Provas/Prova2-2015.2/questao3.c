#include <stdio.h>

int main(){
    int salas[10];
    
    for(int i = 0; i<10; i++)
        scanf("%d", &salas[i]);

    int maior = salas[0], entrada, saida, soma;

    for(int i = 0; i<7; i++){
        soma = salas[i];
        for(int j = i+1; j<7; j++){
            soma += salas[j];
            if(soma > maior){
                maior = soma;
                entrada = i;
                saida = j;
            }
        }
    }
    printf("Entrada: %d\nSaída: %d\nMaior número de vidas: %d\n", entrada, saida, maior);
    return 0;
}
