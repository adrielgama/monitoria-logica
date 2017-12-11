#include <stdio.h>

int main(){
    int prim, seg, fibo, existe = 0;
    int vetor[50];

    for(int i = 0; i<50; i++)
        scanf("%d", &vetor[i]);

    for(int i = 49; i>=0; i--){

        prim = 1;
        seg = 1;
        fibo = prim + seg;

        while(fibo < vetor[i]){
            prim = seg;
            seg = fibo;
            fibo = prim + seg;
        }

        if(fibo == vetor[i]){
            printf("%d\n", i);
            existe = 1;
            break;
        }
    }

    if(existe == 0)
        printf("-1\n");

    return 0;
}
