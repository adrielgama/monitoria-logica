#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(i==n)
            printf("Não é triangular\n");
        else if((i*(i+1)*(i+2))==n){
            printf("É triangular\n");
            break;
        }
    }
    return 0;
}
