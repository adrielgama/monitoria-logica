#include <stdio.h>

int main(){
    float array1[10];
    float array2[10];
    float array3[10];
    for(int i = 0; i<10; i++)
        scanf(" %d %d", &array1[i], &array2[i]);
    for(int i = 0; i<10; i++){
        array3[i] = array1[i] + array2[i];
        printf("%d\n", array3[i]);
    }
    return 0;
}
