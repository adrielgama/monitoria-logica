#include <stdio.h>

int main(){
    int n, potencia; float total = 0;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        potencia = i;
        for(int j = 1; j<i; j++)
            potencia *= i;
        total += 1.0/potencia;
    }
    printf("%.2f\n", total);
    return 0;
}
