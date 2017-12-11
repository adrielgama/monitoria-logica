#include <stdio.h>

int main(){

	int num;

	scanf("%d", &num);

    if(num >= 20 && num < 30)
	        printf("Vinte");
	else if(num >= 30 && num < 40)
		printf("Trinta");
	else if(num >= 40 && num < 50)
		printf("Quarenta");
	else if(num >= 50 && num < 60)
		printf("Cinquenta");
	else if(num >= 60 && num < 70)
		printf("Sessenta");
	else if(num >= 70 && num < 80)
		printf("Setenta");
	else if(num >= 80 && num < 90)
		printf("Oitenta");
	else if(num >= 90 && num < 100)
		printf("Noventa");
	else if(num == 10)
		printf("Dez");
	else if(num == 11)
	    printf("Onze");
	else if(num == 12)
		printf("Doze");
	else if(num == 13)
		printf("Treze");
	else if(num == 14)
		printf("Catorze");
	else if(num == 15)
		printf("Quinze");
	else if(num == 16)
		printf("Dezesseis");
	else if(num == 17)
		printf("Dezessete");
	else if(num == 18)
		printf("Dezoito");
	else if(num == 19)
		printf("Dezenove");
	else if(num == 100)
		printf("Cem");
	
	if(num > 20 && num%10 != 0)
		printf(" e ");

	if(num < 10 || num > 19){
		if(num%10 == 1)
			printf("Um");
		else if(num%10 == 2)
			printf("Dois");
		else if(num%10 == 3)
			printf("Três");
		else if(num%10 == 4)
			printf("Quatro");
		else if(num%10 == 5)
			printf("Cinco");
		else if(num%10 == 6)
			printf("Seis");
		else if(num%10 == 7)
			printf("Sete");
		else if(num%10 == 8)
			printf("Oito");
		else if(num%10 == 9)
			printf("Nove");
	}

    printf("\n");
	return 0;
}
