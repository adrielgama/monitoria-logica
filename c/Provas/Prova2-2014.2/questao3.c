#include <stdio.h>

int main(){
    int n, total = 0;
    float soma = 0;

    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        total += i;
        soma += 1.0/total;
    }
    printf("%.2f\n", soma);
    return 0;
}        
