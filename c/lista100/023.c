#include <stdio.h>

int main(){
    int num;

    scanf("%d", &num);

    if(num%2==0){
        puts("é par");
    }
    else{
        puts("é impar");
    }
    return 0;
}
