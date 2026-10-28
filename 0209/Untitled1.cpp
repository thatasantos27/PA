#include<stdio.h>
#include<stdlib.h>
#include"equilatero.h"
int main ()
{
    int n1, n2, n3;
	int opcao; //variavel 
	
	do
	{
		system("cls");
		printf("\n---- M E N U ----\n");
		printf("1 - Equilatero\n");
		printf("2 - Isoseles\n");
		printf("3 - Equilatero\n");
		printf("0 - SAIR\n");
		printf("Escolha: ");
		scanf("%d", &opcao);
		
		switch (opcao){
			case 0:
				break; // o programa acaba
			case 1:
				printf("Digite 3 numeros: ");
				scanf("%d%d%d", &n1, &n2, &n3);
				printf("\n1. %.1d", equilatero(n1, n2, n3));	
				break;
			case 2:
				printf("\n2. Media = %.1d", isoseles(5, 6, 7));
				break;
			case 3:
				printf("\n3. Delta = %.1d", escaleno(-1, 2, 3));
				break;
			default:
				printf("Opcao invalida!"); // quando o usuário digita um número diferente das opções
		}
		printf("\n");
		
		system("pause"); // sistema pausa
		
	}while (opcao != 0); // O usuario quer prosseguir
	
}
