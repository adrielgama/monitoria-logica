/* Escrever um algoritmo e implementá-lo em linguagem C que linearize uma matriz de 6
por 6, colocando os valores contidos nela em um vetor de 36 elementos e mostrar o
conteúdo do vetor. */
#include <stdio.h>
int main(){
	int matriz[6][6];
	int vetor[36];
	for(int i = 0; i<6; i++){
		for(int j = 0; j<6; j++){
			scanf(" %d", &matriz[i][j]);
		}
	}
	int cont = 0;
	for(int i = 0; i<6; i++){
		for(int j = 0; j<6; j++){
			vetor[cont] = matriz[i][j];
			cont += 1;
		}
	}
	for(int i = 0; i<36; i++)
	    printf("%d ", vetor[i]);
	return 0;
}
