#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    if(num>=0){
        printf("Módulo: %d", num);
    }
    else{
        printf("Módulo: %d", (num * -1));
    }
    return 0;   
}
