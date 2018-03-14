/* Escreva um programa em C, que leia uma string e um caracter e conte o número de
ocorrências do caracter lido na string. */
#include <stdio.h>
int main(){
	char caracter;
	char string[30];
	int total = 0;
	
	fgets(string, 30, stdin);
	
	scanf("%c", &caracter);
	
	for(int i = 0; i<30; i++){
		if(string[i]==caracter)
		    total += 1;
	}
	
	printf("%d\n", total);
	
	return 0;
}
