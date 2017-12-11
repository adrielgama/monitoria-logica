// Escreva um programa em C, que verifique se duas strings são iguais, 
// independente da caixa das letras. Por exemplo, este programa deve dizer que “Teste”é igual a “TeStE”.
#include <stdio.h>
int main(){
	char string1[30], string2[30];
	int igual = 1;
	fgets(string1, 30, stdin);
	fflush(stdin);
	fgets(string2, 30, stdin);
	for(int i = 0; i<30; i++){
		if(string1[i] >= 97)
			string1[i] -= 32;
		if(string2[i] >= 97)
			string2[i] -= 32;
	}
	for(int i = 0; i<30; i++){
		if(string1[i] == '\0')
		    break;
		if(string1[i] != string2[i])
		    igual = 0;
	}
	if(igual == 1)
	    puts("Igual");
	else
	    puts("Nao");
	return 0;
}
