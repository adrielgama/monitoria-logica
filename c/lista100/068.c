#include <stdio.h>

int main(){
    int junho[30];
    int maior[2], menor[2]; 
    float medias[2];
    for(int i = 0; i<30; i++)
        scanf("%d", &junho[i]);
    maior[0] = junho[0];
    maior[1] = 0;
    menor[0] = junho[0];
    menor[1] = 0;
    for(int i = 0; i<30; i++){
        if(junho[i] > maior[0]){
            maior[0] = junho[i];
            maior[1] = i;
        }
        if(junho[i] < menor[0]){
            menor[0] = junho[i];
            menor[1] = i;
        }
    }
    printf("O dia em que mais choveu: %d\nE o que menos choveu: %d\n", (maior[1]+1), (menor[1]+1));
    media[0] = 0;
    media[1] = 0;
    for(int i = 0; i<15; i++)
        media[0] += junho[i];
    for(int i = 15; i<30; i++)
        media[1] += junho[i];
    media[0] /= 15;
    media[1] /= 15;
    printf("%.2f\n%.2f\n", media[0], media[1]);
    return 0;
}
