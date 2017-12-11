// Escreva um programa em C, que dado uma string, crie uma nova string contendo na
// ordem em que aparecem no string dado, as vogais no começo e as consoantes no final.
#include <stdio.h>
int main(){
	char string[30];
	char string2[30];
	fgets(string, 30, stdin);
	int cont = 0;
	for(int i = 0; i<30; i++){
		if(string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U' || string[i] == 'a'|| string[i] == 'e'|| string[i] == 'i'|| string[i] == 'o'|| string[i] == 'u'){
			string2[cont] = string[i];
			cont += 1;
		}	
	}
	for(int i = 0; i<30; i++){
		if(string[i] != 'A' && string[i] != 'E' && string[i] != 'I' && string[i] != 'O' && string[i] != 'U' && string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' && string[i] != 'u'){
			string2[cont] = string[i];
			cont += 1;
		}	
	}
	printf("%s\n", string2);
	return 0;
}
