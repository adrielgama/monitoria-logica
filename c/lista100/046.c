#include <stdio.h>

int main(){
    int A, B, quociente = 0;
    scanf("%d %d", &A, &B);
    while(A>=B){
       A -= B;
       quociente += 1;
    }
    printf("%d\n", quociente);
    return 0;
}
