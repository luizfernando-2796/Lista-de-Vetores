// Lista 1 - Quest�o 5

#include <stdio.h>
#define MAX 80
int main(){
			
		int dados[MAX];
		int i, j, busca, valorEncontrado[MAX];
		char continuar;
		int contador=0;
			
			
		for(i=0; i<MAX; i++){
		printf("Digite o %i%c valor: ", i+1, 167);
		scanf("%d", &dados[i]);	
			
		printf("\nPressione 'S' para novo valor.\n");
		continuar=getch();	
		continuar=toupper(continuar);
			if(continuar!='S'){
				break;
			}
		}
		printf("Qual o valor que queira buscar? \n");
		scanf("%d", &busca);
		system("cls");
		for(j=0; j<=i; j++){
			if(dados[j]==busca){
			valorEncontrado[contador] = i;
			contador++;
			}
		}
		
	printf("\nValor buscado: %i .\n" , busca);
	printf("Encontrado %i vezes. \n", contador);
	printf(" Os valores foram encontrados nas posicoes: \n");
	for(j=0; j<contador; j++){
		if(j+1 == contador){
			printf("%i ", valorEncontrado[j]);
		}else{
			printf("%i ", valorEncontrado[j]);
		}
	}
			
	return 0;
}
