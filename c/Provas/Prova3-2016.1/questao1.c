#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int quadrado[n][n];
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++)
		    scanf(" %d", &quadrado[i][j]);
	}
	int magico = 1;
	int total = 0;
	for(int i = 0; i<n; i++){
		total += quadrado[0][i];
	}
	int cont;
	for(int i = 0; i<n; i++){
		cont = 0;
		for(int j = 0; j<n; j++){
			cont += quadrado[i][j];
		}
		if(cont != total)
			magico = 0;
		cont = 0;
		for(int k = 0; k<n; k++){
			cont += quadrado[k][i];
		}
		if(cont != total)
			magico = 0;
	}
	if(magico == 1)
		printf("Valor: %d\n", total);
	else
		printf("0\n");
	return 0;
}
