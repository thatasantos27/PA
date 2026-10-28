#include <stdio.h>

int main()
{
	int v[8] = {12, 45, 7, 89, 23, 56, 10, 34}, ind, maior, p;
	
	maior = v[0];
	p = 0;
	for(ind = 1; ind < 8; ind++)
	{
	   if(v[ind] > maior)
	   {
	   	maior = v[ind];
	   	p = ind;
	   }
		
	}
	
	printf("Maior numero = %d\n", maior);
	printf("Posicao = %d\n", p);
	
}