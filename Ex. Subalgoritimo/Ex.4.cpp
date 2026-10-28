#include <stdio.h>

int prox_num_par(int num1)
{
	int p;
	if (num1 % 2 == 0)
	{
		p = num1 + 2;
	}
	else
	{
		p = num1 + 1;
	}
	return p;
}

int main()
{
	int n1, proximopar;
	
	printf ("Digite um numero:");
	scanf ("%d", &n1);
	
	proximopar = prox_num_par (n1);
	printf ("Proximo numero par = %d", proximopar);
	
	proximopar = prox_num_par (5);
	printf ("Proximo numero par = %d", proximopar);

    printf ("Proximo numero par = %d", prox_num_par (9));
	
}