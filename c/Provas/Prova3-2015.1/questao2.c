#include <stdio.h>
#define tamanho 80
int main(){
	char string[tamanho], troca;
	fgets(string, tamanho, stdin);
	int vazio = 0;
	for(int i = 0; i<tamanho; i++){
		if(string[i] != ' ')
			break;
		else
			vazio++;
	}
	for(int i = vazio; i > 0; i--){
		for(int i = 0; i<tamanho; i++){
			if(string[i] == '\0' || string[i] == '\n')
			    break;
			troca = string[i];
			string[i] = string[i+1];
			string[i+1] = troca;
		}
	}
	vazio = 0;
	for(int i = tamanho-1; i>=0; i--){
		if(string[i] == ' ')
		    vazio++;
		else
		    break;
	}
	int termino = 79-vazio;
	for(int i = termino; i>=0; i--){
		if(string[i] == ' '){
			termino = i+1;
			break;
		}
	}
	for(int i = vazio; i>0; i--){
		for(int i = 79; i>=termino; i--){
			troca = string[i-1];
			string[i-1] = string[i];
			string[i] = troca;
		}
	}
	puts(string);
	return 0;
}
