#include <stdio.h>
int main()
{
	int v[10], ind, contp=0;
	printf("digite 10 numeros:	");
	for(ind=0;ind < 10;ind++)
	{
		scanf("%d",&v[ind]);
	}
	
	for(ind=0;ind < 10;ind++)
	{
	  if(v[ind] % 2 == 0)
	  {
	  	printf("par: %d",v[ind]);
	    contp = contp + 1;
	  }
	}
	printf("sao %d pares",contp);
}