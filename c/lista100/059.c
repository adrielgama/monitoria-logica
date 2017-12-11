#include <stdio.h>

int main(){
    float soma = 1;
    int fatorial, n;
    scanf("%d", &n);
    for(int i = 1; i<n; i++){
        fatorial = 1;
        for(int j = 1; j<=i; j++){
            fatorial *= j;
        }
        soma += 1.0/fatorial;
    }
    printf("%.2f\n", soma);
    return 0;
}
