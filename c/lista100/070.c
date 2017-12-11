#include <stdio.h>

int main(){
    int array[100];
    for(int i = 0; i<100; i++){
        scanf("%d", &array[i]);
        if(array[i] == 0){
            break;
        }
    }
    return 0;
}
