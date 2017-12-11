/* Escreva um programa em C, que leia uma string e conte quantas ocorrências de vogais existem nesta string */
#include <stdio.h>

int main(){
	char string[30];
	int total = 0;
	fgets(string, 30, stdin);
	for(int i = 0; i<30; i++){
		if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u')
			total++;
	}
	printf("%d\n", total);
	return 0;
}
