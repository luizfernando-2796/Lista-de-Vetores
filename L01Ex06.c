//Lista 1 - Quest�o 6
#include <stdio.h>
#define MAX 100
void maiorSalario (float salario[], int i);
void menorSalario (float salario[], int i);
int main(){
	
	int matricula [MAX]; 
	float salario[MAX];
	int i, j;
	char continuar;
	
	for(i=0; i<MAX; i++){
		printf("Digite a matricula do %d%c funcionario: \n", i+1, 167);
		scanf("%d", &matricula[i]);
		printf("Informe o salario do %d%c funcionario: R$ ", i+1, 167);
		scanf("%f", &salario[i]);
		printf("---------------");
		
		printf("\nPressione 'S' para novo valor.\n");
		continuar=getch();	
		continuar=toupper(continuar);
			if(continuar!='S'){
				break;
			}
		
	}
	system("cls");
	for(j=0; j<=i; j++){
		printf("Matricula %i - Salario %.2f\n", matricula[j], salario[j]);	
	}
	maiorSalario (salario, i);
	menorSalario (salario, i);
	
	
	
	
	return 0;
}
void maiorSalario (float salario[], int i){
	int j;
	float maiorSalario=salario[0];
	
	for(j=1; j<=i; j++){
		if(maiorSalario<salario[j]){
			maiorSalario=salario[j];
		}
	}
	printf("Maior Salario: R$ %.2f\n", maiorSalario);
}

void menorSalario (float salario[], int i){
	int j;
	float menorSalario=salario[0];
	
	for(j=1; j<=i; j++){
		if(menorSalario>salario[j]){
			menorSalario=salario[j];
		}
	}
	printf("Menor Salario: R$ %.2f\n", menorSalario);
}
