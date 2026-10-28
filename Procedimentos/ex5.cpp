//exercicio5
#include<stdio.h>
void exibe_tab(int n1,int n2,int n3)
{
	int m=0,v;
	for(v=n2;v<n3;v=v+1)	
	{
		m=n1*v;
		printf("\n%d x %d = %d",n1,v,m);
	}
	
}
int main ()
{
	exibe_tab(2,3,7);
}