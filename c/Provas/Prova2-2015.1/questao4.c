#include <stdio.h>

int main(){
    int vetor[1000], dias = 1, marca[1000], k = 0, total = 0;
    
    for(int i = 0; i<13; i++)
        vetor[i] = 0;

    do{
        scanf(" %d", &marca[k]);
        k+=1;
        if(marca[k-1] >= 0 && marca[k-1] <1000)
            total += 1;
        else
            break;
    }while(marca[k-1] >= 0 && marca[k-1] <1000);

    int gota[total];

    for(int j = 0; j<total; j++)
        gota[j] = marca[j];

    int preenchido = 0;
    int cont = 1;
    
    for(int i = 0; i<1000; i++){
        for(int j = 0; j<total; j++){
            if(i == gota[j])
                vetor[i] = 1;
        }
    }
    
    while(preenchido != 1){
        for(int i = 0; i<total; i++){
            if((gota[i]+cont)<=999)
                vetor[(gota[i]+cont)] = 1;
            if((gota[i]-cont)>=0)
                vetor[(gota[i]-cont)] = 1;
        }
        cont += 1;
        dias += 1;
        for(int i = 0; i<1000; i++){
            if(vetor[i] == 1)
                preenchido = 1;
            else{
                preenchido = 0;
                break;
            }
        }
    }
    printf("%d\n", dias);
    return 0;
}
