#include <stdio.h>

int main(){

    int vetor[20], vetor2[20], maior[2];
    int troca, mediana, diferentes, cont;
    float media;

    //Leitura do vetor    
    for(int i = 0; i<20; i++)
        scanf(" %d", &vetor[i]);
    
    //Preenchimento de um segundo vetor com os elementos do anterior
    //Esse vetor será usado para ordenação
    //sem comprometer a ordem do anterior
    
    for(int i = 0; i<20; i++)
        vetor2[i] = vetor[i];
    
    //Ordenação do segundo vetor
    for(int j = 19; j>=1; j--){
        for(int i = 0; i<20; i++){
            if(vetor2[i] > vetor2[i+1]){
                troca = vetor2[i];
                vetor2[i] = vetor2[i+1];
                vetor2[i+1] = troca;
            }
        }
    }
    
    //Mediana
    mediana = vetor[9];
    printf("Mediana: %d\n", mediana);
    
    //Quantos elementos diferentes existem no segundo vetor
    diferentes = 0;
    
    for(int i = 0; i<20; i++){
        if(vetor2[i] != vetor2[i+1])
            diferentes += 1;
    }
    
    //Vetor para comparar qual elemento ocorre mais vezes
    int moda[diferentes][2];
    
    cont = 0;
    
    moda[cont][0] = vetor2[0];
    moda[cont][1] = 1;
    
    for(int i = 1; i<20; i++){
        if(vetor2[i] == moda[cont][0])
            moda[cont][1] += 1;
        else{
            cont += 1;
            moda[cont][0] = vetor2[i];
            moda[cont][1] = 1;
        }
    }
    
    //Vetor maior para ver qual elemento possui mais ocorrências
    maior[0] = moda[0][0];
    maior[1] = moda[0][1];
    
    for(int i = 1; i<=cont; i++){
        if(moda[i][1] > maior[1]){
            maior[0] = moda[i][0];
            maior[1] = moda[i][1];
        }
    }
    
    printf("Moda: %d\n", maior[0]);
    
    //Cálculo da média
    media = 0;
    
    for(int i = 0; i<20; i++)
        media += vetor[i];
    
    media /= 20;
    printf("Média: %.2f\n", media);

    return 0;
}
