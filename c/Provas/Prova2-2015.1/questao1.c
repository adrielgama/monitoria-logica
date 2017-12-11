#include <stdio.h>

int main(){
    int n, total;
    float soma = 0;

    scanf("%d", &n);
    total = n;

    for(float i = 1; i<=n; i++){
        soma += (i/total);
        total -= 1;
    }

    printf("%.2f\n", soma);
    return 0;
}
