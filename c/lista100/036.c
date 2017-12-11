#include <stdio.h>

int main(){
  
	float nota1, nota2, nota3, nota4, nota5, media;

	scanf("%f %f %f %f %f", &nota1, &nota2, &nota3, &nota4, &nota5);

	media = (nota1 + nota2 + nota3 + nota4 + nota5)/5;

	if(media >= 70){
		if(nota1 >= 70 && nota2 >= 70 && nota3 >= 70 && nota4 >= 70 && nota5 >= 70){
			puts("Classificação A");
		}
		else if(nota1 >= 70 && nota2 >= 70 && nota4 >= 70 && (nota3 < 70 || nota5 < 70)){
			puts("Classificação B");
		}
		else if(nota1 >= 70 && nota2 >= 70 && (nota3 >= 70 || nota4 >= 70) && nota5 < 70){
			puts("Classificação C");
		}
	}
	else{
		puts("Reprovado");
	}

	return 0;
}
