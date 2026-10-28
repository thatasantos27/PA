#include <stdio.h>

int main()
{
 int v[10] = {13, 50, 27, 15, 67, 42, 20, 16, 7, 37},ind, n;
 
 printf("Digite um numero: ");
 scanf("%d", &n);

 int encontrou = 0;
 for(ind=0; ind<10; ind++)
 {
 	if(n == v[ind])
 	{
 		encontrou = 1;
 		break;
	}

 }
  	if(encontrou)
 	{
 		printf("O valor %d esta contido no vetor", n);
	}
	else
	{
		printf ("O valor %d nao esta contido nos vetores", n);
	}
}