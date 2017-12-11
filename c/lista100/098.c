/* Escrever um algoritmo e implementá-lo em linguagem C que leia duas matrizes (4x3 e
3x2), calcule e imprima a matriz que representa o produto entre as duas matrizes lidas. */
#include <stdio.h>
int main(){
	int matriz1[4][3];
	int matriz2[3][2];
	
	printf("Matriz A: \n");
	for(int i = 0; i<4; i++){
		for(int j = 0; j<3; j++){
			scanf(" %d", &matriz1[i][j]);
		}
	}
	
	printf("Matriz B: \n");
	for(int i = 0; i<3; i++){
		for(int j = 0; j<2; j++){
			scanf(" %d", &matriz2[i][j]);
		}
	}
	
	printf("\nResultado:\n");
	for(int i = 0; i<4; i++){
		int soma1 = 0;
		int soma2 = 0;
		int cont = 0;
		for(int j = 0; j<3; j++){
			soma1 += matriz1[i][j] * matriz2[cont][0];
			soma2 += matriz1[i][j] * matriz2[cont][1];
			cont += 1;
		}
		printf("%d %d\n", soma1, soma2);
	}
	return 0;
}
