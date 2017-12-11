#include <stdio.h>

int main(){
    float tentados, completos, jardas, touch, inter, rating, perc, razaoj, razaot, razaoi;

    scanf("%f %f %f %f %f", &tentados, &completos, &jardas, &touch, &inter);

    perc = completos/tentados;
    perc = (perc - 0.3)/0.2;

    if(perc <= 0){
        perc = 0;
    }
    else if(perc >= 2.375){
        perc = 2.375;
    }

    razaoj = jardas/tentados;
    razaoj = (razaoj - 3)/4;

    if(razaoj <= 0){
        razaoj = 0;
    }
    else if(razaoj >= 2.375){
        razaoj = 2.375;
    }

    razaot = touch/tentados;
    razaot /= 0.05;

    if(razaot <= 0){
        razaot = 0;
    }
    elseif(razaot >= 2.375){
        razaot = 2.375;
    }

    razaoi = inter/tentados;
    razaoi = (razaoi - 0.095)/0.04;

    if(razaoi <= 0){
        razaoi = 0;
    }
    else if(razaoi >= 2.375){
        razaoi = 2.375;
    }

    rating = ((perc + razaoj + razaot + razaoi) * 100)/6;
    printf("QB Rating: %.2f", rating);
    return 0;

}
