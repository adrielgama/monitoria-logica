#include <stdio.h>

int main(){
    int n;
    int result = 0;
    int impar = 1;

    scanf("%d", &n);

    while(n>0){
        n -= impar;
        result += 1;
        impar += 2;
    }

    printf("%d\n", result);
    return 0;
}
