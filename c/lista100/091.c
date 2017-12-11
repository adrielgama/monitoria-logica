/* Elabore um programa em C que leia valores inteiros para preencher uma matriz A 5 x 5.
Você deverá criar adicionalmente dois vetores de 5 elementos: somaLinhas e
somaColunas. Em cada posição do vetor somaLinhas deverá ser armazenada a soma da
linha correspondente na matriz A. Da mesma forma, em cada posição do vetor
somaColunas deverá ser armazenada a soma da coluna correspondente na matriz A. */
#include <stdio.h>
int main(){
	int matriz[5][5];
	int somarLinhas[5], somarColunas[5];
	for(int i = 0; i<5; i++){
		for(int j = 0; j<5; j++){
			scanf(" %d", &matriz[i][j]);
		}
	}
	for(int i = 0; i<5; i++){
		somarLinhas[i] = 0;
		somarColunas[i] = 0;
		for(int j = 0; j<5; j++){
			somarLinhas[i] += matriz[i][j];
			somarColunas[i] += matriz[j][i];
		}
	}
	for(int i = 0; i<5; i++){
		printf("Soma Linhas %d: %d\nSoma Colunas %d: %d\n", i, somarLinhas[i], i, somarColunas[i]);
	}
	return 0;
}
