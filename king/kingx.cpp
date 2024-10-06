#include<stdio.h>

int main()
{
	int nombre,diviseur;
	printf("nombre = ");scanf("%d",&nombre);
	if(nombre%diviseur==0)
	do
	{
		printf("%d  ",diviseur);
		diviseur++;
	}while(diviseur<=nombre);
	return 0;
}
