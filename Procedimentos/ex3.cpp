//exercicio3 
#include<stdio.h>
void exibe_tab(int n1)
{
	int m=0,v;
	for(v=1;v<11;v=v+1)	
	{
		m=n1*v;
		printf("\n%d x %d = %d",n1,v,m);
	}
	
}
int main ()
{
	exibe_tab(3);
}