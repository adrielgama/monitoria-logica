#include <stdio.h>
int main(){
	char chave[256];
	gets(chave);
	int n;
	scanf(" %d", &n);
	char string[n][256];
	for(int i = 0; i<n; i++){
		gets(string[i]);
	}
	float distancia[n];
	for(int i = 0; i<n; i++){
		distancia[i] = 0;
	}
	int tamanho = 0;
	for(int i = 0; i<256; i++){
		if(chave[i] == '\0' || chave[i] == '\n')
		    break;
		tamanho++;
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; j<=tamanho; j++){
			if(string[i][j] == ' ' || string[i][j] == '\0' || string[i][j] == '\n')
		        	distancia[i] += 0.5;
		    	else if(string[i][j] != chave[j])
		        	distancia[i] += 1;
		}
	}
	float troca_float;
	char troca_char;
	for(int i = n-1; i>=0; i--){
		for(int j = 0; j<=i; j++){
			if(distancia[j] > distancia[j+1]){
				troca_float = distancia[j];
				distancia[j] = distancia[j+1];
				distancia[j+1] = troca_float;
				for(int k = 0; k<256; k++){
					troca_char = string[j][k];
					string[j][k] = string[j+1][k];
					string[j+1][k] = troca_char;
				}
			}
		}
	}
	for(int i = 0; i<n; i++){
		printf("String: %s\n", string[i]);
		printf("Distancia: %f\n\n", distancia[i]);
	}
	return 0;
}
