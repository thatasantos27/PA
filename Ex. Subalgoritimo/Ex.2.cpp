#include <stdio.h> 

float calcular_delta (float num1, float num2, float num3)
{
	float d;
	d = (num2 * num2 - 4 * num1 * num3);
	return d;
}

//Programa principal
int main ()
{
	float n1, n2, n3, delta;
	
	printf("Digite 3 numeros:");
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	
	delta = calcular_delta (n1, n2, n3);
	printf("Delta = %f", delta);
	
	delta = calcular_delta(1,8,4);
	printf("Delta = %f", delta);
	
	printf("Delta = %f", calcular_delta(1,8,2));
}