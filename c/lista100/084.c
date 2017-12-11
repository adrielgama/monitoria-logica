/* Escreva um programa em C que verifique se uma string normalizada é palíndrome (os
mesmos caracteres quando lida da direita para a esquerda). */
#include <stdio.h>
int main(){
	int palindrome = 1, tamanho = 0;
	char string[30];
	fgets(string, 30, stdin);
	for(int i = 0; i<30; i++){
		if(string[i] == '\0'){
			break;
		}
		tamanho += 1;
	}
	for(int i = 0, j = tamanho-2; i<tamanho-1; i++, j--){
		if(string[i] != string[j]){
			palindrome = 0;
			break;
		}
	}
	if(palindrome == 1)
	    puts("Sim");
	else
	    puts("Nao");
	return 0;
}
