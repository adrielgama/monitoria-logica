#include <stdio.h>

int main(){

	int num1, num2, num3, num4, agencia;

	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

	agencia = (num1 * 5) + (num2 * 4) + (num3 * 3) + (num4 * 2);

	agencia %= 11;

	agencia = 11 - agencia;

	if(agencia == 10){
	
		printf("Dígito verificador: %d%d%d%d-X\n", num1, num2, num3, num4);

	}
	else{

		printf("Dígito verificador: %d%d%d%d-%d\n", num1, num2, num3, num4, agencia);
	}

	return 0;

}
