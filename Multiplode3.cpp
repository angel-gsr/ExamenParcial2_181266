#include <stdio.h>

int main()
{
	int i,j;
	
	printf("Entre lineas '-----' se encuentra el multiplo\n");
	
	for(i=0;i<=100;i++)
	{
		if(i%3==0)
		{
			//printf("%d \n",i);
			printf("--------------\n%d es Numero multiplo de 3\n-------------\n",i);
		}
		else
		{
			printf("%d no es Numero multiplo de 3\n",i);
		}
	}
	
	return 0;
}
