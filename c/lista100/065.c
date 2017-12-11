#include <stdio.h>

int main(){
    int maior[2], menor[2], array[20];
    for(int i = 0; i<20; i++)
        scanf("%d", &array[i]);
    maior[0] = array[0];
    maior[1] = 0;
    menor[0] = array[0];
    menor[1] = 0;
    for(int i = 0; i<20; i++){
        if(array[i] > maior[0]){
            maior[0] = array[i];
            maior[1] = i;
        }
        if(array[i] < menor[0]){
            menor[0] = array[i];
            menor[1] = i;
        }
    }
    printf("%d %d\n%d %d\n", maior[0], maior[1], menor[0], menor[1]);
    return 0;
}
