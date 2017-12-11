#include <stdio.h>

int main(){

    int troca;
    int array[15] = {3, 4, 5, 6, 78, 0, 1, 45, 91, 90, 11, 12, 13, 67, 100};

    for(int i = 14; i>0; i--){
        for(int j = 0; j<i; j++){
            if(array[j] > array[j+1]){
                troca = array[j];
                array[j] = array[j+1];
                array[j+1] = troca;
            }
        }
    }

    for(int i = 0; i<15; i++)
        printf("%d\n", array[i]);

    return 0;
}
