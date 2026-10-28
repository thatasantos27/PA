#include <stdio.h>
int main(){
	int n1,n2,media;
	printf("digite dois numeros");
     scanf("%d",&n1);
     scanf("%d",&n2);
       
     if((n1<0 || n1>10)||(n2<0||n2>10))
     {
     	printf("nota invalida");
	 }
      else
      {
      	printf("nota valida\n");
      	media= (n1+n2)/2;
      	if(media<=5)
	      {
	      	printf("reprovado");
		  }
		  else
		  {
		  	printf("aprovado");
		  }
	  }
      
	}

    

