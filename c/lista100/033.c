#include <stdio.h>

int main(){

	float x, y;

	scanf("%f %f", &x, &y);

	if(x == y && x == 0){
		puts("Origem");
	}
	else if(x > 0 && y > 0){
		puts("2");
	}
	else if(x > 0 && y < 0){
		puts("3");
	}
	else if(x < 0 && y > 0){
		puts("1");
	}
	else if(x < 0 && y < 0){
		puts("4");
	}

	return 0;

}
