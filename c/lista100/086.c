/*Escreva um número que leia um número em Romano e imprima o equivalente em
decimal (base 10)*/
#include <stdio.h>
int main(){
	char romano[10];
	int total = 0;
	fgets(romano, 10, stdin);
	for(int i = 0; i<10; i++){
		if(romano[i] == '\0')
		    break;
		else if(romano[i] == 'I'){
			if(romano[i+1] == 'V'){
				total += 4;
				i += 1;
			}
			else if(romano[i+1] == 'X'){
				total += 9;
				i+= 1;
			}
			else{
				total += 1;
			}
		}
		else if(romano[i] == 'V'){
			total += 5;
		}
		else if(romano[i] == 'X'){
			if(romano[i+1] == 'L'){
				total += 40;
				i += 1;
			}
			else if(romano[i+1] == 'C'){
				total += 90;
				i+= 1;
			}
			else{
				total += 10;
			}
		}
		else if(romano[i] == 'L'){
			total += 50;
		}
		else if(romano[i] == 'C'){
			if(romano[i+1] == 'D'){
				total += 400;
				i += 1;
			}
			else if(romano[i+1] == 'M'){
				total += 900;
				i += 1;
			}
			else{
				total += 100;
			}
		}
		else if(romano[i] == 'D'){
			total += 500;
		}
		else if(romano[i] == 'M'){
			total += 1000;
		}
	}
	printf("%d\n", total);
	return 0;
}
