#include <stdio.h>

int main(){
    char letra;

    scanf("%c", &letra);

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        puts("Vogal");
    }
    else{
        puts("Consoante");
    }

    return 0;
}
