#include <stdio.h>

int main(){
    int A, B, troca, n;
    scanf("%d", &n);
    A = 1;
    B = 1;
    printf("%d %d ", A, B);
    for(int i = 3; i<=n; i++){
        troca = A + B;
        printf("%d ", troca);
        A = B;
        B = troca;
    }
    return 0;
}
