#include <stdio.h>

//exercício 1
int mult10;
void multiplos10 (int n1)
{
	int m=0,v;
	for(v=1;v<11;v=v+1)	
	{
		m=n1*v;
		printf("\n%d",m);
	}
	
}

//exercicio 2

void multiplos_n (int n1,int n2)
{
	int m=0,v;
	for(v=1;v<n2;v=v+1)	
	{
		m=n1*v;
		printf("\n%d",m);
	}
	
}

//exercício 3
void exibe_tab1 (int n1)
{
	int m=0,v;
	for(v=1;v<11;v=v+1)	
	{
		m=n1*v;
		printf("\n%d x %d = %d",n1,v,m);
	}
	
}

//exercício 4
void exibe_tab2 (int n1,int n2)
{
	int m=0,v;
	for(v=1;v<n2;v=v+1)	
	{
		m=n1*v;
		printf("\n%d x %d = %d",n1,v,m);
	}
	
}

//exercício 5
void exibe_tab3(int n1,int n2,int n3)
{
	int m=0,v;
	for(v=n2;v<n3;v=v+1)	
	{
		m=n1*v;
		printf("\n%d x %d = %d",n1,v,m);
	}
	
}
