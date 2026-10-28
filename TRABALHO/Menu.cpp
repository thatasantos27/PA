#include <stdio.h>
#include <stdlib.h>
#include "Exercicios.h"

void  exercicio1 (int v[], int ind)
{
	printf("\nv[%d] = %d\n\n", ind, v[ind]);
}

void exercico2 (int v[], int soma)
{
	printf("\nSoma = %d\n", soma);
}

void exercicio3 (int v[], int ind)
{
	printf("\nPar = %d\n", v[ind]);
}

void exercicio4 (int v[],int e)
{
	printf("\nHa %d elementos entre 10 e 30\n", e);
}

void exercicio5 (float v[], float media)
{
	printf("\nMedia = %f\n", media);
}

void exercicio6 (int v[], int p, int maior)
{
	printf("\nMaior numero = %d\n", maior);
	printf("\nPosicao = %d\n", p);
}
   
int main(){
	int v[8] = {12, 40, 7, 89, 23, 54, 10, 32};
	float vetor[5] = {45, 56, 67, 50, 34};
	int opcao;
	do
	{	
	    system("cls");
		printf("0 - SAIR\n");
		printf("1 - Exibir os elementos em ordem decrescente\n");
		printf("2 - Exibir as somas dos elementos\n");
		printf("3 - Exibir os numeros pares\n");
		printf("4 - Exibir quantos elementos estao entre 10 e 30\n");
		printf("5 - Exibir a media dos numeros\n");
		printf("6 - Exibir o maior valor entre 8 numeros inteiros\n");
		printf("Escolha: ");
		scanf("%d", &opcao); 
		
	
		switch (opcao)
		{
			case 0:
				break;
			case 1:
				exercicio1 (v);
				break;
			case 2:
				exercicio2(v);
				break;
			case 3:
				exercicio3(v);
				break;
			case 4:
				exercicio4(v);
				break;
			case 5:
				exercicio5(vetor);
				break;
			case 6:
				exercicio6(v);
				break;
		}
		printf("\n");
		
		system("pause");
		
	}while (opcao != 0);
}