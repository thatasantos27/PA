#include <stdio.h>

int vetor10 (int v[], int n)
{
 int encontrou = 0;
 for(int ind=0; ind<10; ind++)
 {
 	if(n == v[ind])
 	{
 		encontrou = 1;
 		break;
	}
	return encontrou;
 }
}
int main()
{
 int vetor[10] = {13, 50, 27, 15, 67, 42, 20, 16, 7, 37};
 int numero;
 
 printf("Digite um numero: ");
 scanf("%d", &numero);
 
 	if(vetor10)
 		printf("O valor %d esta contido no vetor", numero);
	else
		printf ("O valor %d nao esta contido nos vetores", numero);
	
}