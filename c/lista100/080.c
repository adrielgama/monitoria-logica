/* Escreva um programa em C que leia duas string e informe se a primeira contém a
segunda. */

#include <stdio.h>
int main(){
	char string[30], string2[30];
	int contem = 0, cont = 0, tamanho = 0;
	fgets(string, 30, stdin);
	fflush(stdin);
	fgets(string2, 30, stdin);
	for(int i = 0; i<30; i++){
	    if(string2[i] == '\0'){
	    	break;
		}
		tamanho += 1;
	}
	tamanho -= 1;
	for(int i = 0; i<30; i++){
		if(string[i] == string2[cont]){
			cont += 1;
			if(cont == tamanho){
				contem = 1;
			}
		}
		else{
			cont = 0;
		}
	}
	if(contem == 1){
	    puts("Contem");
	}
	else{
	    puts("Nao");
	}
}
