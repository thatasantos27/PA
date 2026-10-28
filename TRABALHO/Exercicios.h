#include <stdio.h>

//ex 1
 void exercicio1 (int v[5])
{
	int ind;
	for(ind=4; ind>=0; ind=ind-1)
	{
		printf("v[%d] = %d\n", ind, v[ind]);
	}
}
//ex 2
 void exercicio2(int v[5])
{	
    int ind, soma = 0;
    for(ind = 0; ind < 5; ind++)
    {
    	soma = soma + v[ind];
	}
    
	printf("Soma = %d", soma);
}
	
//ex3
 void exercicio3(int v[5])
{	
    int ind;
    for(ind = 0; ind < 5; ind++)
    {
       if(v[ind] % 2 == 0)
       {
       	 printf ("Par = %d\n", v[ind]);
	   }
	}
}
	
//ex4
 void exercicio4( int v[5])
 {	
    int ind, e = 0;
	for(ind = 0; ind < 5; ind++)
    {
        if(v[ind] > 10 && v[ind] < 30)
        {
        	e = e + 1;
		}
	}
	printf("Ha %d elementos entre 10 e 30", e);
}
//ex5
 void exercicio5(float v[5])
{
	float ind, media;
	for(ind=0; ind<5; ind++)
	{
		media= v[0] + v[1] + v[2] + v[3] + v[4];
		media = media / 5;
	}
	
	printf("Media = %f", media);
}

//ex6
 void exercicio6 (int v[8])
 {
 	int ind, maior = v[0], p = 0;
	for(ind = 1; ind < 8; ind++)
	{
	   if(v[ind] > maior)
	   {
	   	maior = v[ind];
	   	p = ind;
	   }
	printf("Maior numero = %d", maior);
	printf("Posicao = %d", p);
 }


