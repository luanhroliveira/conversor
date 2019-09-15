/* 01010111  01110010  01101001  01110100  01110100  01100101  01101110  01100010 
 * 01111001  01001100  01110101  01100001  01101110  01001000  01010010  01001111 
 * 01101100  01101001  01110110  01100101  01101001  01110010  01100001  00101110
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "funcoes.h"

/*VARIÁVEIS GLOBAIS*/
int bin[7];
int num;
char caracter;

void abertura(){

	printf("################################################################\n");
	printf("###                                                          ###\n");
	printf("###                   caracter para binário                  ###\n");
	printf("###                                                          ###\n");
	printf("################################################################\n");

}

void menu(){

	int menu;

	abertura();

	printf("\nPara nova conversão pressione 1, para sair pressione 0: ");
	scanf("%i", &menu);

	switch(menu){
		case 1: dec_for_bin();
		case 0: exit(1);
	}
}

int char_for_int(){
	/*TRANSFORMA LETRA EM DECIMAL*/
	scanf(" %c", &caracter);
	num = caracter;

	if (caracter == '\n'){
		printf("\nEscreva o texto que deseja converter em número binário:\n");
		dec_for_bin();
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
	printf("  ");

	return dec_for_bin();
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	/* code */	
	menu();
}