#include <stdio.h>

int main()
{
	int a=0;
	
	printf("Introduzca el ano: ");
	scanf("%d",&a);
	
	if((a%4==0) && (a%100!=0) || (a%400==0))
	{
		printf("Ano bisiesto \n");
	}
	else
	{
		printf("Ano no bisiesto \n");
	}
	
	return 0;
}
