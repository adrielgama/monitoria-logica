#include <stdio.h>
int main(){
	char palavra[30];
	gets(palavra);
	int final;
	for(int i = 0; i<30; i++){
		if(palavra[i+1] == '\0' || palavra[i+1] == '\n'){
			final = i;
			break;
		}
	}
	int i = final - 1;
	while(palavra[i] != palavra[final]){
		i--;
	}
	final = i;
	char novaPalavra[final+1];
	for(int i = 0; i<=final; i++){
		novaPalavra[i] = palavra[i];
	}
	puts(novaPalavra);
	return 0;
}
