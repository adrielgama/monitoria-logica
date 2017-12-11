#include <stdio.h>

int main(){
    int vetor1[10], vetor2[10], vetor3[10];
    for(int i = 0; i<10; i++)
        scanf(" %d %d", &vetor1[i], &vetor2[i]);
    for(int i = 0; i<10; i++){
        vetor3[i] = vetor1[i];
        if(vetor2[i] > vetor3[i])
            vetor3[i] = vetor2[i];
    }
    for(int i = 0; i<10; i++)
        printf("%d\n", vetor3[i]);
    return 0;
}
