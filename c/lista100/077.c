/*Escreva um programa em C, que leia uma string, gere uma nova string com o texto invertido e imprima esta nova string. */
#include <stdio.h>
int main(){
	char string[10], string2[10];
	scanf("%11s", string);
	for(int i = 0, j = 9; i<10; i++, j--){
		if(string[i] == '\0' || string[i] == 40)
		    string2[j] = ' ';
		else
	    	    string2[j] = string[i];
	}
	printf("String 1: %s\n", string);
	printf("String 2: %10s\n", string2);
	return 0;
}
