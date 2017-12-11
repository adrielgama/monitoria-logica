#include <stdio.h>

int main(){

	float renda, emprestimo, prestacoes, prestacao;

	scanf("%f %f %f", &renda, &emprestimo, &prestacoes);

	prestacao = emprestimo/prestacoes;

	if(emprestimo > (renda * 10) || prestacao > (renda * 0.3)){
		puts("Emprestimo não pode ser concedido");
	}

	else{
		puts("Emprestimo concedido");
	}

	return 0;
}
