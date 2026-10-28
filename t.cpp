#include <stdio.h>

int main ()
{
	int v[5], ind;
	
    //Preencher o vetor
	for(ind = 0; ind < 5; ind++)
	{
		printf ("v[%d] = ", ind);
		scanf ("%d", &v[ind]);
	}
	
	//Exibir o valor
	for (ind = 0; ind < 5; ind++)
	{
		printf ("v[%d] = %d\n", ind, v[ind]);
	}
	
}