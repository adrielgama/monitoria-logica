#include <stdio.h>
int main(){
	char matriz[50][50];
	char vetor[50*50];
	char maior = vetor[0];
	int cont = 0, total = 0, count = 0;
	
	for(int i = 0; i<50; i++){
		for(int j = 0; j<50; j++){
			scanf(" %c", &matriz[i][j]);
		}
	}
	
	for(int i = 0; i<50; i++){
		for(int j = 0; j<50; j++){
			vetor[cont] = matriz[i][j];
			cont++;
		}
	}
	
	for(int i = (50*50)-1; i>=0; i--){
		for(int j = 0; j<50*50; j++){
			if(vetor[i] > vetor[i+1]){
				troca = vetor[i+1];
				vetor[i+1] = vetor[i];
				vetor[i] = troca;
			}
		}
	}
	
	for(int i = 0; i<50*50; i++){
		count++;
		j = i;
		while(vetor[j] == vetor[i]){
			count++;
			j++;
		}
		if(count>total){
			total = count;
			maior = vetor[i];
		}
		j--;
		i = j;
	}
	
	printf("Letra: %c\nVezes: %d\n", maior, total);
	return 0;
}
