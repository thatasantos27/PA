#include <stdio.h>

int main ()
{
	int v[5] = {23, 46, 67, 87, 12}, ind;
	
    for(ind = 0; ind < 5; ind++)
    {
       if(v[ind] % 2 == 0)
       {
       	 printf ("Par = %d\n", v[ind]);
	   }
	}
	
}