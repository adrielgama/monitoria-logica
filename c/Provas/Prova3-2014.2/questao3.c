#include <stdio.h>
struct produto{
	char nome[30];
	float preco;
};
int main(){
	struct produto Produto[100];
	float media = 0;
	for(int i = 0; i<100; i++){
		scanf(" %31s", Produto[i].nome);
		scanf(" %f", &Produto[i].preco);
		media += Produto[i].preco;
	}
	media /= 100;
	for(int i = 0; i<100; i++){
		if(Produto[i].preco < media){
			Produto[i].preco *= 1.1;
		}
	}
	int menor = 0;
	for(int i = 0; i<100; i++){
		if(Produto[i].preco < Produto[menor].preco){
			menor = i;
		}
	}
	printf("Menor produto: %s\nPreco: %.2f\n", Produto[menor].nome, Produto[menor].preco);
	return 0; 
}
