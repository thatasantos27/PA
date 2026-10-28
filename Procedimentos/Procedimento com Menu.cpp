//Menu
#include <stdio.h>
#include "Procedimentos.h"
#include<stdlib.h>

int main ()
{
	int n1, n2, n3;
	int opcao;
	
	do
	{
		system("cls");
		
		printf("\n------MENU------\n");
		printf("1.Multiplos de um numero ate 10\n");
		printf("2.Multiplos ate um numero escolhido\n");
		printf("3.Exibe a tabuada\n");
		printf("4.Exibe a tabuada ate um numero escolhido\n");
		printf("5.Exibe a tabuada de um numero ate outro\n");
		printf("0. SAIR\n");
		printf("Escolha\n");
		scanf("%d", opcao);
		
		switch (opcao) 
		{
			case 0:
				break;
		    case 1:
		    	printf("Digite um numero:");
		    	scanf("%d", &n1);
		    	printf("\n1 Multiplos = %d", multiplos10);
		    	break;
		    case 2:
		    	printf("Digite dois numeros:");
		    	scanf("%d%d", &n1, &n2);
		    	printf("\n2 Multiplos = %d", multiplos_n);
		    	break;
		    case 3:
		    	printf("Digite um numeros:");
		    	scanf("%d", &n1);
		    	printf("\n3 Tabuada = %d", exibe_tab1);
		    	break;
		    case 4:
		    	printf("Digite dois numeros:");
		    	scanf("%d%d", &n1, &n2);
		    	printf("\n4 Tabuada = %d", exibe_tab2);
		    	break;
		    case 5:
		    	printf("Digite três numeros:");
		    	scanf("%f%f%f", &n1, &n2, &n3);
		    	printf("\n5 Multiplos = %d", exibe_tab3);
		    	break;
		    default:
		    	printf("Opção Invalida!");
			
		}
		printf("\n");
		
		system("pause");
		
	}while (opcao != 0);
}