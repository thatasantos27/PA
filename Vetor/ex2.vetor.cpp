#include <stdio.h>

int main ()
{
	int v[5] = {23, 46, 67, 87, 12}, ind, soma=0;
	
    for(ind = 0; ind < 5; ind++)
    {
    	soma = soma + v[ind];
	}
	
	printf("Soma = %d", soma);
}