//Thayssa Oliveira dos Santos

#include <stdio.h>


int contar_intervalo(int n1, int n2)
{
	int i=0, v;
	for(v=n1; v<=n2; v++)
	{
		i = i + v;
		return i;
	}

}

int main()
{
	int resp, n1, n2;
	printf("\n Digite dois numeros: \n");
	scanf("%d", &n1);
	scanf("%d", &n2);
	
	resp = contar_intervalo (n1, n2);
	printf("\n Intervalo = %d", resp);
}