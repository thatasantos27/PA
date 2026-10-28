#include <stdio.h>
int main(){
	int n1,n2,media;
	printf("digite dois numeros :");
	scanf("%d",&n1);
	scanf("%d",&n2);
	media=(n1+n2)/2;
	if (media<5)
    {
		printf("reprovado");
	}
	else 
	{
	
        printf("aprovado");
    }
}
