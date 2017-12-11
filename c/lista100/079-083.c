/* Escreva um programa em C, que gere a substring de uma string original, dado a posição
inicial e a final da substring. */
#include <stdio.h>
int main(){
	char string[30];
	int inicio, final;
	fgets(string, 30, stdin);
	scanf("%d %d", &inicio, &final);
	char string2[(final-inicio)+1];
	for(int i = inicio, cont = 0; i<=final; i++, cont++){
		string2[cont] = string[i];
	}
	printf("%s\n", string2);
	return 0;
}
