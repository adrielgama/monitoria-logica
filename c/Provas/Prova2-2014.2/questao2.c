#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int primo = 2;
    int i = 0;

    while(i<n){
        for(int j = 2; j<=primo; j++){
            if(j==primo){
                int primo2 = j+2;
                for(int k = 2; k<=primo2; k++){
                   if(k==primo2){
                       printf("(%d, %d)\n", j, k);
                       i += 1;
                       break;
                   }
                   else if(primo2%k==0)
                       break;
                }
            }
            else if(primo%j==0)
                break;   
        }
        primo += 1;        
    }
    return 0;
}
