#include <stdio.h>
int main(){
	int baixoGuitarra[10][20][1];
	int baixoBatera[10][5][1];
	int guitarraBatera[20][5][1];
	int maior = 0, total, maiorBaixo = 0, maiorGuitarra = 0, maiorBatera = 0;
	
	for(int i = 0; i<10; i++){
		for(int j = 0; j<20; j++){
			printf("Baixo %d Guitarra %d: %d\n", i, j, i*j);
			baixoGuitarra[i][j][0] = i*j;
		}
	}
	for(int i = 0; i<10; i++){
		for(int j = 0; j<5; j++){
			printf("Baixo %d Batera %d: %d\n", i, j, i*j);
			baixoBatera[i][j][0] = i*j;
		}
	}
	for(int i = 0; i<20; i++){
		for(int j = 0; j<5; j++){
			printf("Guitarra %d Batera %d: %d\n", i, j, i*j);
			guitarraBatera[i][j][0] = i*j;
		}
	}
	
	for(int i = 0; i<10; i++){
		for(int j = 0; j<20; j++){
			for(int k = 0; k<5; k++){
				total = baixoGuitarra[i][j][0] + baixoBatera[i][k][0];
				if(total > maior){
					maior = total;
					maiorBaixo = i;
					maiorGuitarra = j;
					maiorBatera = k;
				}
			}
		}
	}
	
	for(int i = 0; i<20; i++){
		for(int j = 0; j<5; j++){
			for(int k = 0; k<10; k++){
				total = baixoGuitarra[k][i][0] + guitarraBatera[i][j][0];
				if(total > maior){
					maior = total;
					maiorBaixo = k;
					maiorGuitarra = i;
					maiorBatera = j;
				}
			}
		}
	}
	
	for(int i = 0; i<5; i++){
		for(int j = 0; j<10; j++){
			for(int k = 0; k<20; k++){
				total = guitarraBatera[k][i][0] + baixoBatera[j][i][0];
				if(total > maior){
					maior = total;
					maiorBaixo = j;
					maiorGuitarra = k;
					maiorBatera = i;
				}
			}
		}
	}
	
	printf("Combinacao: %d %d %d com %d pontos\n", maiorBaixo, maiorGuitarra, maiorBatera, maior);
	return 0;
}
