#include <stdio.h>

int main(){
    int primo1, primo2, metade;
    for(int n = 500; n<=1000; n+=2){
        metade = n/2;
        for(int i = metade; i >=2; i--){
            primo1 = 0;
            for(int j = 2; j<=i; j++){
                if(j==i)
                    primo1 = 1;
                else if(i%j==0)
                    break;
            }
            if(primo1 == 1){
                primo2 = 0;
                for(int k = 2; k<=(n-i); k++){
                    if(k == (n-i))
                        primo2 = 1;
                    else if((n-i)%k==0)
                        break;
                }
                if(primo2 == 1){
                    printf("%d %d %d\n", n, i, (n-i));
                    break;
                }
            }
        }
    }
    return 0;
}



