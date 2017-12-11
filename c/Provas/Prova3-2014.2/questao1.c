#include <stdio.h>
#define LINHAS 10
#define COLUNAS 10
int main(){
	int matriz[LINHAS][COLUNAS];
	int binaria = 1;
	for(int i = 0; i<LINHAS; i++){
		for(int j = 0; j<COLUNAS; j++){
			scanf(" %d", &matriz[i][j]);
		}
	}
	int totalLinhas;
	int totalColunas;
	for(int i = 0; i<LINHAS; i++){
		totalLinhas = 0;
		totalColunas = 0;
		for(int j = 0; j<COLUNAS; j++){
			if(matriz[i][j] == 1)
			    totalLinhas += 1;
			if(matriz[j][i] == 1)
			    totalColunas += 1;
			if(matriz[i][j] != 1 && matriz[i][j] != 0)
			    binaria = 0;
		}
		if(totalColunas != 1 || totalLinhas != 1)
		    binaria = 0;
	}
	if(binaria == 0)
	    puts("Nao");
	else
	    puts("Sim");
	return 0;
}
