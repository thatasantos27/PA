#include <stdio.h>

int main ()
{
	int v[5] = {23, 46, 67, 87, 12}, ind;
	
	for(ind=4; ind>=0; ind=ind-1)
	{
		printf("v[%d] = %d\n", ind, v[ind]);
	}
}