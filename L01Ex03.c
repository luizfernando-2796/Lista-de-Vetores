// Lista 1 - Quest�o 03
#include<stdio.h>
int main(){
	
	int dados[100];
	int i=0, soma=0;
	char continuar;
	
	do{
		printf("Digite o %i%c valor: ", i+1, 167);
		scanf("%i", &dados[i]);
		soma += dados[i];
		
		printf("Digite P para proximo valor: \n");
		continuar = getch();
		continuar = toupper(continuar);
		i++;
		
	}while(continuar=='P' && i<100);
	printf("Resultado da soma dos valores: %i", soma);
	
	return 0;
}
