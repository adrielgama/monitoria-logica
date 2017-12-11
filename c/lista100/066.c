#include <stdio.h>

int main(){
    int vetor1[10], vetor2[10];
    for(int i = 0; i<10; i++)
        scanf("%d", &vetor1[i]);
    for(int i = 0; i<10; i++){
        vetor2[i] = vetor1[i];
        printf("%d\n", vetor2[i]);
    }
    return 0;
}
