//exercicio2 
#include<stdio.h>
void multiplos_n (int n1,int n2)
{
	int m=0,v;
	for(v=1;v<n2;v=v+1)	
	{
		m=n1*v;
		printf("\n%d",m);
	}
	
}
int main ()
{
	multiplos_n(3,7);
}