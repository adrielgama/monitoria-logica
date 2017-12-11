#include <stdio.h>

int main(){
    
    int num, resto, total, brasileiro;
    for(int num = 1; num<500; num++){
        int brasil[num-3];
        brasileiro = 0;
        for(int i = 0; i < (num-3); i++){
            brasil[i] = 0;
        }

        int j = 0;
        for(int i = 2; i<(num-1); i++){
            total = num;
            float soma = 0;
            int cont = 0;
            while(total > i){
                resto = total%i;
                total /= i;
                cont += 1;
                soma += resto;   
            }
            cont += 1;
            soma += total;
            float result = soma/cont;
            if(result == total && result == resto){
                brasil[j] = 1;
                break;
            }
            j+=1;
        }

        for(int i = 0; i<(num-3); i++){
            if(brasil[i] == 1){
                brasileiro = 1;
                break;
            }
        }
        
        if(brasileiro == 1)
            printf("%d ", num);
    }
    printf("\n");
    return 0;
}
