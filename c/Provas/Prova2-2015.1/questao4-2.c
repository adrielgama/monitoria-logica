#include <stdio.h>
#include <stdlib.h>

int main(){

    int fita[13] = {};
    int pos, dias = 0, preenchida, j;
    
    do{
        scanf(" %d", &pos);
	    if(pos < 1 || pos > 13) break;
	    fita[pos-1] = 1;
    } while(pos > 1 && pos < 14);

    while(1){
        
        preenchida = 1;
	    for(int i = 0; i<13; i++)
	        if(!fita[i])
	            preenchida = 0;

	    if(preenchida) break;

	    for(int i = 0; i<13; i++){
	        if(fita[i]){
                j = i;
		        while(fita[j] && j >= 0)
		            j--;
		        fita[j] = 1;
		        while(fita[j] && j < 13)
		            j++;
		        fita[j] = 1;
		        i = j;
	        }
	    }
	    dias++;
    }

    printf("Total de dias: %d\n", dias);

    return 0;
}
