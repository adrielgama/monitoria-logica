#include <stdio.h>
int main(){
	int n, erro = 0;
	scanf("%d", &n);
	int matriz[n][2];
	for(int i = 0; i<n; i++){
		printf("Homem: ");
		scanf(" %d", &matriz[i][0]);
		printf("Mulher: ");
		scanf(" %d", &matriz[i][1]);
		printf("\n");
		
		if(matriz[i][0] < 18 || matriz[i][0] > 30 || matriz[i][1] < 18 || matriz[i][1] > 30)
		    erro = 1;
		
		if(erro == 1){
			matriz[i][0] = 0;
			matriz[i][1] = 0;
		    break;
		}
	}
	int homem[14][2];
	int mulher[14][2];
	int cont = 18;
	for(int i = 0; i<14; i++){
		homem[i][0] = cont;
		homem[i][1] = 0;
		mulher[i][0] = cont;
		mulher[i][1] = 0;
		cont += 1;
	}
	for(int i = 0; i<n; i++){
		if(matriz[i][0] == 0)
		    break;
		for(int j = 0; j<14; j++){
			if(matriz[i][0] == homem[j][0])
				homem[j][1] += 1;
			if(matriz[i][1] == mulher[j][0])
			    mulher[j][1] += 1;
		}
	}
	int maiorIdadeHomem = homem[0][0];
	int maiorContHomem = homem[0][1];
	int maiorIdadeMulher = mulher[0][0];
	int maiorContMulher = mulher[0][1];
	
	for(int i = 0; i<14; i++){
		if(homem[i][1] > maiorContHomem){
			maiorIdadeHomem = homem[i][0];
			maiorContHomem = homem[i][1];
		}
		if(mulher[i][1] > maiorContMulher){
			maiorIdadeMulher = mulher[i][0];
			maiorContMulher = mulher[i][1];
		}
	}
	printf("Idade mais frequente dos homens: %d\nIdade mais frequente das mulheres: %d\n", maiorIdadeHomem, maiorIdadeMulher);
	int totalCombinacao = 0, contCombinacao = 0, troca;
	int maiorCombinacao[2];
	maiorCombinacao[0] = matriz[0][0];
	maiorCombinacao[1] = matriz[0][1];
	for(int j = n; j>=0; j--){
		for(int i = 0; i<n; i++){
			if(matriz[i][0] > matriz[i+1][0]){
				troca = matriz[i][0];
				matriz[i][0] = matriz[i+1][0];
				matriz[i+1][0] = troca;
				
				troca = matriz[i][1];
				matriz[i][1] = matriz[i+1][1];
				matriz[i+1][1] = troca;
			}
		}
	}
	for(int i = 0; i<n; i++){
		if(matriz[i][0] != 0){
			contCombinacao += 1;
			if(contCombinacao > totalCombinacao){
				totalCombinacao = contCombinacao;
				maiorCombinacao[0] = matriz[i][0];
				maiorCombinacao[1] = matriz[i][1];
			}
			if(matriz[i][0] != matriz[i+1][0]){
				contCombinacao = 0;
			}
		}
	}
	printf("Maior combinacao: %d %d\nApareceu %d vezes.\n", maiorCombinacao[0], maiorCombinacao[1], totalCombinacao);
	return 0;
}
