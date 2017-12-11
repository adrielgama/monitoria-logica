#include <stdio.h>

int main(){
    char caracter;

    scanf("%c", &caracter);

    switch(caracter){
        case 'a':
	case 'e':
        case 'i':
	case 'o':
	case 'u': puts("Vogal"); break;
	case 'b':
	case 'c':
	case 'd':
	case 'f':
	case 'g':
	case 'h':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'v':
	case 'x':
	case 'y':
	case 'z': puts("Consoante"); break;
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case '0': puts("Número"); break;
	default: puts("Símbolo"); break;    
    }
    return 0;
}
