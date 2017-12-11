#include <stdio.h>

int main(){
	int ano;

	scanf("%d", &ano);

	if(ano % 4 == 0){
		if(ano % 100 == 0){
			if(ano % 400 == 0){
				puts("Bissexto");
			}
			else{
				puts("Não é bissexto");
			}
		}
	        else{
			puts("Bissexto");		
		}	
	}
	else {
		puts("Não é bissexto");	
	}

	return 0;
}
