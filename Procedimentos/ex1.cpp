//exercicio 1 
#include<stdio.h>
void multiplos10 (int n1)
{
	int m=0,v;
	for(v=1;v<11;v=v+1)	
	{
		m=n1*v;
		printf("\n%d",m);
	}
	
}
int main ()
{
	multiplos10 (3);
}
	