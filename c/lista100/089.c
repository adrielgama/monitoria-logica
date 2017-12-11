#include <stdio.h>
int main(){
	char nome[50];
	int totalEspacos = 0;
	fgets(nome, 50, stdin);
	for(int i = 0; i<50; i++){
		if(nome[i] == '\0')
		    break;
		if(nome[i] == ' ')
		    totalEspacos += 1;
	}
	char nome2[50];
	int acharEspacos = 0;
	int count = 0;
	for(int i = 0; i<50; i++){
		if(nome[i] == '\0')
		    break;
		if(nome[i] == ' ')
		    acharEspacos += 1;
		if(acharEspacos == totalEspacos){
			i += 1;
			while(nome[i] != '\0'){
				if(nome[i] == '\n')
				    break;
				nome2[count] = nome[i];
				count += 1;
				i+=1;
			}
		}
	}
	nome2[count] = ',';
	nome2[count+1] = ' ';
	count += 2;
	int contarNomes = 0;
	for(int i = 0; i<50; i++){
		if(nome[i] == '\0')
		    break;
		if(contarNomes == totalEspacos)
		    break;
		if(i == 0){
		    nome2[count] = nome[i];
		    nome2[count+1] = '.';
		    nome2[count+2] = ' ';
		    count += 3;
		    i += 1;
		    contarNomes += 1;
		}
		if(nome[i] == ' '){
			nome2[count] = nome[i+1];
			nome2[count+1] = '.';
			nome2[count+2] = ' ';
			count += 3;
			i += 1;
			contarNomes += 1;
		}
	}
 	printf("%s\n", nome2);
 	return 0;	
}
