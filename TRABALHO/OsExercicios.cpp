#include <stdio.h>

//ex 1
 void exercicio1 (int v[5], int ind)
{
	for(ind=4; ind>=0; ind=ind-1)
	{
		printf("v[%d] = %d\n", ind, v[ind]);
	}
}

//ex 2
 void exercicio2(int v[5], int ind, int soma=0)
{	
    for(ind = 0; ind < 5; ind++)
    {
    	soma = soma + v[ind];
    	printf("Soma = %d", soma);
	}
    
}
	
//ex3
 void exercicio3(int v[5], int ind)
{	
    for(ind = 0; ind < 5; ind++)
    {
       if(v[ind] % 2 == 0)
       {
       	 printf ("Par = %d\n", v[ind]);
	   }
	}
}
	
//ex4
 void exercicio4( int v[5], int ind)
 {	
	for(ind = 0; ind < 5; ind++)
    {
        if(v[ind] > 10 && v[ind] < 30)
        {
        	printf("%d\n", v[ind]);
		}
	}
}

//ex5

 void exercico5(float v[5], float ind, float media)
{
	for(ind=0; ind<5; ind++)
	{
		media= ind / 5;
		printf("Media = %f", media);
	}
	
}