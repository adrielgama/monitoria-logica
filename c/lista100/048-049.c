#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 2; i<=n; i++){
        if(i==n)
            printf("É primo\n");
        else if(n%i == 0){
            printf("Não é primo\n");
            break;
        }
    }
    return 0;
}
