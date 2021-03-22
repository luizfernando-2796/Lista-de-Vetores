// Lista 1 - Questão 4

#include <stdio.h>

int main (){
	
	char letras[30];
	int i;
	
	for(i=0; i<30; i++){
		printf("Digite a %i%c letra: \n", i+1, 167);
		letras[i] = getch();
		printf("Letras: %c\n", letras[i]);
		
	}
	printf("Letras digitadas em ordem inversa: \n");
	for(i=29; i>=0; i--){
		printf("%c ", letras[i]);
	}
	printf("\n");
		
	return 0;
}
