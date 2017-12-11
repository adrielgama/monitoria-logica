#include <stdio.h>

int main(){
    int n, cont = 1; float soma = 0;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        if(i%2==0)
            soma -= (1.0/(cont*cont*cont));
        else
            soma += (1.0/(cont*cont*cont));
        cont += 2;
    }
    printf("%.2f\n", soma);
    return 0;
}
