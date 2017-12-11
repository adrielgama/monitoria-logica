#include <stdio.h>

int main(){
    int num, media = 0;
    for(int i = 0; i<5; i++){
        scanf(" %d", &num);
        media += num;
    }
    media /= 5;
    return 0;
}
