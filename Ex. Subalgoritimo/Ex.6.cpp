#include <stdio.h>

float menor_3n(float n1, float n2, float n3)
{
	float menor = n1;
	if (n2 < menor)
		menor = n2;
	if (n3 < menor)
		menor = n3;
	return menor;
}

int main ()
{
	float n1, n2, n3, menor;
	
	printf ("Menor numero = %f\n", menor_3n (20, 6, 14));
	
}