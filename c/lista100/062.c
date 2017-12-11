#include <stdio.h>

int main(){
    int array[10], pares = 0;
    for(int i = 0; i<10; i++)
        scanf(" %d", &array[i]);
    for(int i = 0; i<10; i++){
        if(array[i]%2==0)
            pares += 1;
    }
    printf("%d\n", pares);
    return 0;
}
