#include <stdio.h>

int main(){
    int primeiro, segundo, n, troca;
    scanf("%d %d %d", &primeiro, &segundo, &n);
    printf("%d %d ", primeiro, segundo);
    for(int i = 3; i<= n; i++){
        if(i%2!=0)
            troca = segundo + primeiro;
        else
            troca = segundo - primeiro;
        printf("%d ", troca);
        primeiro = segundo;
        segundo = troca;
    }
    return 0;
}
