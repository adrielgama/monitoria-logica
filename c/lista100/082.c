/* Escreva um programa em C, que dada uma string (normalizada), imprima a maior palavra
dela. */
#include <stdio.h>
int main(){
	char string[30];
	int inicio, final, total = 0, maior = 0, temp;
	fgets(string, 30, stdin);
	for(int i = 0; i<30; i++){
		if(string[i]!=' ' && string[i] != '\0'){
			temp = i;
			total += 1;
			while(string[i]!=' ' && string[i] != '\0'){
				total += 1;
				i+=1;
			}
			if(total > maior){
				maior = total;
				inicio = temp;
				final = i-1;
			}
			i-=1;
		}
		total = 0;
	}
	for(int i = inicio; i<=final; i++){
		printf("%c", string[i]);
	}
	printf("\n");
	return 0;
}
