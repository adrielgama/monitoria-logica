/* Escrever um algoritmo e implementá-lo em linguagem C que leia duas matrizes de
valores inteiros 3 por 4 e crie uma terceira matriz, que seja a soma das duas primeiras, e
uma quarta, que seja a diferença entre a primeira e a segunda. Mostrar as matrizes lidas e
calculadas */
#include <stdio.h>
int main(){
	int matriz[3][4], matriz2[3][4];
	int matriz3[3][4], matriz4[3][4];
	for(int i = 0; i<3; i++){
		for(int j = 0; j<4; j++){
			scanf(" %d %d", &matriz[i][j], &matriz2[i][j]);
		}
	}
	for(int i = 0; i<3; i++){
		for(int j = 0; j<4; j++){
			matriz3[i][j] = matriz[i][j] + matriz2[i][j];
			matriz4[i][j] = matriz[i][j] - matriz2[i][j];
		}
	}
	for(int i = 0; i<3; i++){
		for(int j = 0; j<4; j++){
			printf("Matriz 3: %d\nMatriz 4: %d\n", matriz3[i][j], matriz4[i][j]);
		}
	}
	return 0;
}
