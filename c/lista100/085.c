/*Escreva um programa que leia uma string representando um número hexadecimal (base
16) e imprima sua representação em decimal (base 10).*/
#include <stdio.h>
int main(){
	char string[10];
	fgets(string, 10, stdin);
	for(int i = 0; i<10; i++){
		if(string[i] == '\0')
		    break;
		switch(string[i]){
			case '0': 
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9': printf("%c ", string[i]); break;
			case 'A': printf("10 "); break;
			case 'B': printf("11 "); break;
			case 'C': printf("12 "); break;
			case 'D': printf("13 "); break;
			case 'E': printf("14 "); break;
			case 'F': printf("15 "); break;
		}
	}
	printf("\n");
	return 0;
}
