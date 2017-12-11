#include <stdio.h>

int main(){
    int vetor[10];
    for(int i = 0; i<10; i++)
        scanf(" %d", &vetor[i]);
    int primeiro = 0, ultimo = 9;
    int n, meio, ocorre = 0;
    scanf(" %d", &n);
    while(primeiro <= ultimo){
        meio = (primeiro + ultimo)/2;
        if(n > vetor[meio])
            primeiro = meio + 1;
        else if(n == vetor[meio]){
            printf("%d\n", meio);
            ocorre = 1;
            break;
        }
        else
            ultimo = meio - 1;
    }
    if(ocorre == 0)
        printf("-1\n");
    return 0;
}
