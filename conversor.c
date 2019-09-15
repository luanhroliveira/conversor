#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "funcoes.h"

/*VARIÁVEIS GLOBAIS*/
int bin[7];
int num;
int caracter;

int char_for_int(){
	/*TRANSFORMA LETRA EM DECIMAL*/
	caracter = 0;
	num = 0;

	printf("Informe uma letra para converte-la em número binário: ");
	caracter = getchar();

	switch(caracter){
		/*MAIÚSCULAS*/
		case 'A': caracter = 65; num = caracter; break;
		case 'B': caracter = 66; num = caracter; break;
		case 'C': caracter = 67; num = caracter; break;
		case 'D': caracter = 68; num = caracter; break;
		case 'E': caracter = 69; num = caracter; break;
		case 'F': caracter = 70; num = caracter; break;
		case 'G': caracter = 71; num = caracter; break;
		case 'H': caracter = 72; num = caracter; break;
		case 'I': caracter = 73; num = caracter; break;
		case 'J': caracter = 74; num = caracter; break;
		case 'K': caracter = 75; num = caracter; break;
		case 'L': caracter = 76; num = caracter; break;
		case 'M': caracter = 77; num = caracter; break;
		case 'N': caracter = 78; num = caracter; break;
		case 'O': caracter = 79; num = caracter; break;
		case 'P': caracter = 80; num = caracter; break;
		case 'Q': caracter = 81; num = caracter; break;
		case 'R': caracter = 82; num = caracter; break;
		case 'S': caracter = 83; num = caracter; break;
		case 'T': caracter = 84; num = caracter; break;
		case 'U': caracter = 85; num = caracter; break;
		case 'V': caracter = 86; num = caracter; break;
		case 'W': caracter = 87; num = caracter; break;
		case 'X': caracter = 88; num = caracter; break;
		case 'Y': caracter = 89; num = caracter; break;
		case 'Z': caracter = 90; num = caracter; break;
		/*MINÚSCULAS*/
		case 'a': caracter = 97; num = caracter; break;
		case 'b': caracter = 98; num = caracter; break;
		case 'c': caracter = 99; num = caracter; break;
		case 'd': caracter = 100; num = caracter; break;
		case 'e': caracter = 101; num = caracter; break;
		case 'f': caracter = 102; num = caracter; break;
		case 'g': caracter = 103; num = caracter; break;
		case 'h': caracter = 104; num = caracter; break;
		case 'i': caracter = 105; num = caracter; break;
		case 'j': caracter = 106; num = caracter; break;
		case 'k': caracter = 107; num = caracter; break;
		case 'l': caracter = 108; num = caracter; break;
		case 'm': caracter = 109; num = caracter; break;
		case 'n': caracter = 110; num = caracter; break;
		case 'o': caracter = 111; num = caracter; break;
		case 'p': caracter = 112; num = caracter; break;
		case 'q': caracter = 113; num = caracter; break;
		case 'r': caracter = 114; num = caracter; break;
		case 's': caracter = 115; num = caracter; break;
		case 't': caracter = 116; num = caracter; break;
		case 'u': caracter = 117; num = caracter; break;
		case 'v': caracter = 118; num = caracter; break;
		case 'w': caracter = 119; num = caracter; break;
		case 'x': caracter = 120; num = caracter; break;
		case 'y': caracter = 121; num = caracter; break;
		case 'z': caracter = 122; num = caracter; break;
	}
	return num;
}

void dec_for_bin(){
	/*TRANSFORMA DECIMAL EM BINÁRIO*/
	char_for_int();

	for(int i = 7; i >= 0; i--){
		if(num % 2 == 0){
			bin[i] = 0;
			num /= 2;
		}else{
			bin[i] = 1;
			num /= 2;
		}
	}
	for (int i = 0; i < 8; i++){
		printf("%i", bin[i]);
	}
	printf("\n\n");
	return dec_for_bin();
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	/* code */	
	dec_for_bin();

	return 0;
}