/* Verificar se uma matriz dada forma um Quadrado Latino de ordem N, no qual
em cada linha e em cada coluna aparecem todos os inteiros 1,2,3, ... N, ou seja, cada linha
ou coluna é permutação dos N primeiros números inteiros */
#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int matriz[n][n];
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			scanf(" %d", &matriz[i][j]);
		}
	}
	int quadrado = 1;
	int conferirMatriz[n][2];
	for(int i = 0; i<n; i++){
		conferirMatriz[i][0] = i+1;
		conferirMatriz[i][1] = 0;
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			for(int k = 0; k<n; k++){
				if(matriz[i][j] == conferirMatriz[k][0]){
					conferirMatriz[k][1] += 1;
					break;
				}
			}
		}
		for(int l = 0; l<n; l++){
			if(conferirMatriz[l][1] > 1){
				quadrado = 0;
			}
		}
		for(int m = 0; m<n; m++){
			conferirMatriz[m][1] = 0;
		}
	}
	for(int i = 0; i<n; i++){
		conferirMatriz[i][1] = 0;
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			for(int k = 0; k<n; k++){
				if(matriz[j][i] == conferirMatriz[k][0]){
					conferirMatriz[k][1] += 1;
					break;
				}
			}
		}
		for(int l = 0; l<n; l++){
			if(conferirMatriz[l][1] > 1){
				quadrado = 0;
			}
		}
		for(int m = 0; m<n; m++){
			conferirMatriz[m][1] = 0;
		}
	}
	if(quadrado == 1)
	    puts("Sim");
	else
	    puts("Nao");
	return 0;
}
