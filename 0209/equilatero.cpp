#include<stdio.h>
int equilatero(int n1,int n2,int n3)
{
	if(n1==n2 && n2==n3)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	
	
int isoseles (int n1,int n2,int n3)
   if(n1==n2 && n2!=n3 && n1==n3)
	{
		return 0;
	}
	else
	{
		return 1 ;
	}

int escaleno (int n1,int n2 ,int n3)
  if (n1!=n2 && n2!=n3 && n1!=n3)
	{
		return 0;
	}
	else
	{
		return 1 ;
	}
	
}