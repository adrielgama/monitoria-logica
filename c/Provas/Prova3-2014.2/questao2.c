#include <stdio.h>
int main(){
	char string[256];
	fgets(string, 256, stdin);
	int total = 0;
	for(int i = 0; i<256; i++){
		if(string[i] == '\0' || string[i] == '\n')
		    break;
		if((string[i] >= 65 && string[i] <= 90) || (string[i] >= 97 && string[i] <= 122)){
			if(string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' && string[i] != 'u' && string[i] != 'A' && string[i] != 'E' && string[i] != 'I' && string[i] != 'O' && string[i] != 'U' && string[i] != ' ' && string[i] != '\n'){
				if(string[i+1] != 'a' && string[i+1] != 'e' && string[i+1] != 'i' && string[i+1] != 'o' && string[i+1] != 'u' && string[i+1] != 'A' && string[i+1] != 'E' && string[i+1] != 'I' && string[i+1] != 'O' && string[i+1] != 'U' && string[i+1] != ' ' && string[i+1]!='\n'){
					total += 1;
					while(string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' && string[i] != 'u' && string[i] != 'A' && string[i] != 'E' && string[i] != 'I' && string[i] != 'O' && string[i] != 'U' && string[i] != ' ' && string[i] != '\n'){
						i += 1;
					}
					i -= 1;
				}
			}
		}
	}
	printf("Total: %d\n", total);
	return 0;
}
