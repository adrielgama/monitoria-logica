/* Escreva um programa em C que normalize uma string lida, em uma nova string.
Normalizar uma string é o processo de remover os espaços excedentes que separam as
palavras. */
#include <stdio.h>
int main(){
	char string[30];
	char string2[30];
	int cont = 0;
	fgets(string, 30, stdin);
	for(int i = 0; i<30; i++){
		if(string[i] != ' '){
			string2[cont] = string[i];
			cont += 1;
		}
		else{
			string2[cont] = ' ';
			cont += 1;
			while(string[i] == ' '){
				i+=1;
			}
			i-=1;
		}
	}
	puts(string2);
	return 0;
}
