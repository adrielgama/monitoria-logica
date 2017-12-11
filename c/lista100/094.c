/* Escrever um algoritmo e implementá-lo em linguagem C que leia uma matriz de valores
inteiros 6 por 6 e um valor inteiro qualquer, posteriormente multiplicar a matriz pelo
valor lido e colocar o resultado na própria matriz. */
#include <stdio.h>
int main(){
	int matriz[6][6];
	int num;
	for(int i = 0; i<6; i++){
		for(int j = 0; j<6; j++){
			scanf(" %d", &matriz[i][j]);
		}
	}
	scanf(" %d", &num);
	for(int i = 0; i<6; i++){
		for(int j = 0; j<6; j++){
			matriz[i][j] *= num;
		}
	}
	return 0;
}
