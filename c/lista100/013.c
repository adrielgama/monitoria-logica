#include <stdio.h>

int main(){
    float R1, R2, R3, total;

    scanf("%f %f %f", &R1, &R2, &R3);

    total = 1.0/R1 + 1.0/R2 + 1.0/R3;

    printf("%f\n", total);

    return 0;
}
