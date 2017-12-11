#include <stdio.h>

int main(){
    int idoneo;

    for(int i = 1; i<=2000; i++){
        idoneo = 1;
        for(int j = 1; j<=100; j++){
            for(int k = j+1; k<=100; k++){
                for(int l = k+1; l<=100; l++){
                    if(((j*k)+(k*l)+(j*l))==i)
                        idoneo = 0;
                }
            }
        }
        if(idoneo == 1)
            printf("%d ", i);
    }
    return 0;
}
