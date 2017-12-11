#include <stdio.h>

int main(){
    int array[20];
    for(int i = 0; i<20; i++){
        array[i] = 0;
        printf("%d %d\n", i, array[i]);
    }
    return 0;
}
