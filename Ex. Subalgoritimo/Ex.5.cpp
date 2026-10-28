#include <stdio.h>

float maior_2n (float num1, float num2)
{
	if(num1>num2)
	{
		return num1;
	}
	else
	{
		return num2;
	}
}

int main ()
{
	float n1, n2, maior;
	
	printf("Digite dois numero:");
	scanf("%f", &n1);
	scanf("%f", &n2);
	
	maior = maior_2n(n1, n2);
	printf("Maior = %f\n", maior);
	
	printf("Maior = %f\n", maior_2n (5,10));
}