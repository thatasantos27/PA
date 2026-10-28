#include<stdio.h>
float somar_2n (float n1,float n2)
{
	return n1+n2;

}
void saudacao ()
{
	printf("\n BOM DIA A TODOS!!!!");
}
void saudacao2(int hora)
{
	if(hora < 12)
	
	printf("\n BOM DIA USUARIO , SEJA BEM VINDO !");
	
	else if(hora < 18 )
	
	printf("\n BOA TARDE USUARIO SEJA BEM VINDO !");
	
	else
	
	printf("\n BOA NOITE USUARIO SEJA BEM VINDO !");

}

int main ()
{

	printf("%f",somar_2n(7,8));
	saudacao();
	saudacao2(8);
	printf("\n FIM !");
}




