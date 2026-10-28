#include<stdio.h>
int main (){
	int v[10]={67,42,22,13,56,27,15,16,69,54},ind,n1;
	
	printf("digite um numero :");
	scanf("%d",&n1);
	
	for(ind=0;ind <10 ; ind++)
	{
	if(n1==v[ind])	
	{
		printf("Este numero esta no vetor: %d\n",ind);
	}
}


	

    for(ind = 0; ind <10; ind++)
    {
      
	   if(v[ind] % 2 == 0)
 {
       	 printf ("Par = %d\n", v[ind]);
	   }
	}
}
