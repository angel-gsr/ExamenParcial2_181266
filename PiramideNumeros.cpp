#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i,j,lineas;
	
	printf("Numero de lineas pa la piramide: ");
	scanf("%d",&lineas);
	
	for(i=1;i<=lineas;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
		
	}	
		
	return 0;
}
