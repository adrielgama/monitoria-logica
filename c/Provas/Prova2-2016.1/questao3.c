#include <stdio.h>

int main(){
    int array[50], total = 0, maior = 0;
    for(int i = 0; i<50; i++)
        scanf("%d", &array[i]);
    for(int i = 0; i<50; i++){
        total += 1;
        if(total > maior)
            maior = total;
        if(array[i] > array[i+1])
            total = 0;
    }
    printf("%d\n", maior);
    return 0;
}
