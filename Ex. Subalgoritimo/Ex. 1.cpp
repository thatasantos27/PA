#include <stdio.h> 

float media_numeros (float num1, float num2, float num3)
{
	float m;
	m = ((num1 + num2 + num3) /3 );
	return m;
}

//Programa principal
int main ()
{
	float n1, n2, n3, media;
	
	printf("Digite 3 numeros:");
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	
	media = media_numeros (n1, n2, n3);
	printf("Media = %f", media);
	
	media = media_numeros(10,20,30);
	printf("Media = %f", media);
	
	printf("Media = %f", media_numeros(30,40,50));
}