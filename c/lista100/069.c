#include <stdio.h>

int main(){
    int vetor[15];
    int n, vezes = 0;
    for(int i = 0; i<15; i++)
        scanf("%d", &vetor[i]);
    scanf("%d", &n);
    for(int i = 0; i<15; i++){
        if(vetor[i] == n)
            vezes += 1;
    }
    printf("%d\n", vezes);
    return 0;
}
