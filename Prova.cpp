//Thayssa Oliveira dos Santos

#include <stdio.h>

int i, v;
int contar_intervalo(int n1, int n2)
{
	for(v=n1; v<=n2; v++)
	{
		i = i + v;
	}
	return i;
}

int main()
{
	int resp, n1, n2;
	printf("Digite dois numeros:");
	scanf("%d", n1, n2);
	
	resp = contar_intervalo (n1, n2);
	i = resp;
	printf("Intervalo = %d", resp);
}

