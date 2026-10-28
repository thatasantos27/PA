#include<stdio.h>
int eh_triangulo(int n1,int n2,int n3)
{
	if(n1>n2+n3)
	{
		return 0;
	}
	else if(n2>n1+n3)
	{
		return 0;
	}
	else if ( n3>n1+n2)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main ()
{
	int n1,n2,n3;
	printf("%d\n", eh_triangulo(8, 5, 9));//retorna 1 
	printf("%d\n", eh_triangulo(1, 5, 9));// retorna 0 
	printf("%d\n", eh_triangulo(9, 1, 5));// reotna 0 
	printf("%d\n", eh_triangulo(1, 9, 5));//retorna 0
}