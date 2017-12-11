#include <stdio.h>

int main(){
    int vetor[10], n, ocorre = 0;
    for(int i = 0; i<10; i++)
        scanf("%d", &vetor[i]);
    scanf("%d", &n);
    for(int i = 0; i<10; i++){
        if(vetor[i] == n){
            printf("%d\n", i);
            ocorre = 1;
            break;
        }
    }
    if(ocorre = 0)
        printf("-1\n");
    return 0;
}
