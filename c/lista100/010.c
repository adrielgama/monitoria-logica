#include <stdio.h>

int main(){

    int num;
    
    while(1){
        scanf("%d", &num);
        if(num > 32){
            puts("Deve ser menor do que 32.");
        }
        else{
            break;
        }
    }
    
    if(num == 32){
        printf("\n1"); num -= 32;
    }
    else{
        printf("\n0");
    }
    
    if(num >= 16){
        printf("1"); num -= 16;
    }
    else{ printf("0"); }

    if(num >= 8){
        printf("1"); num -= 8;
    }
    else {
        printf("0");
    }

    if(num >= 4){
        printf("1"); num -= 4;
    }
    else {
        printf("0");
    }

    if(num >= 2){
        printf("1"); num -= 2;
    }
    else{
        printf("0");
    }

    if(num >= 1){
        printf("1\n"); num -= 1;
    }
    else{
        printf("0\n");
    }
    
    return 0;
}
