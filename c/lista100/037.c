#include <stdio.h>

int main(){

	float tipo, area, acre, valor;

	scanf("%f %f", &tipo, &area);

	switch(tipo){
		case 1: acre = 50;
		case 2: acre = 100;
		case 3: acre = 150;
		case 4: acre = 250;
	}

	if(area > 1000){
		valor = area * acre;
		valor = valor - (valor * 0.05);
	}

	if(valor > 750){
		valor = valor - (valor * 0.10);
	}

	printf("Total a ser pago: %.2f", valor);

	return 0;

}
