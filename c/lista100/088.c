// Escreva um programa em C, que coloque a string lida toda em caixa alta.
#include <stdio.h>
int main(){
	char string1[30];
	fgets(string1, 30, stdin);
	for(int i = 0; i<30; i++)
	    if(string1[i] >= 97 && string1[i] <= 122)
	        string1[i] -= 32;
	printf("%s\n", string1);
	return 0;
}
