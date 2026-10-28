#include <stdio.h>

float prox_num (float num1)
{
	float p;
	p = (num1 + 1);
	return p;
}

//Programa principal
int main ()
{
	float n, proximo;
	
	printf("Digite um numero:");
	scanf ("%f", &n);
	
	proximo = prox_num (n);
	printf("Proximo numero = %f", proximo);
	
	proximo = prox_num (66);
	printf ("Proximo numero = %f", proximo);
	
	printf("Proximo numero = %f", prox_num (66));
}