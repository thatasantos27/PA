#include<stdio.h>
int main ()
{
	int n_preco, n_qmd, n_anos , gasto, total_macos , dias ;
    printf("digite tres numeros:");
    scanf("%d", &n_preco);
    scanf("%d", &n_qmd);
	scanf("%d", &n_anos);
	dias = n_anos * 365 ;
	total_macos= n_qmd * dias;
	gasto = total_macos * n_preco;
	printf("gasto =%d", gasto);	
}
