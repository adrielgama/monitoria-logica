#include <stdio.h>

int main(){
    int A = 5000000, B = 7000000, anos = 0;
    while(B >= A){
        A += (A*0.03);
        B += (B*0.02);
        anos += 1;
    }
    printf("%d\n", anos);
    return 0;
}
