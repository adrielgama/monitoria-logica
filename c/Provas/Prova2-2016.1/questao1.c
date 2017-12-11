#include <stdio.h>
int main(){
    int n, cortes, carta, maior1, maior2, cont;
    scanf("%d %d %d", &n, &cortes, &carta);
    int baralho[n];
    if(n%2==0)
        maior2 = n/2;
    else
        maior2 = (n/2)+1;
    maior1 = n/2;
    int metade1[maior1], metade2[maior2];
    for(int i = 0; i<n; i++)
        baralho[i] = i+1;
    for(int i = 0; i<cortes; i++){
        for(int j = 0; j<maior1; j++)
            metade1[j] = baralho[j];
        for(int j = 0, k = maior2; j<maior2; j++, k++)
            metade2[j] = baralho[k];
        cont = 0;
        for(int j = 0; j<n; j+=2){
            baralho[j] = metade2[cont];
            baralho[j+1] = metade1[cont];
            cont+=1;
        }
    }
    for(int i = 0; i<n; i++){
        if(baralho[i] == carta)
            printf("Posição: %d\n", i);
    }
    return 0;
}
