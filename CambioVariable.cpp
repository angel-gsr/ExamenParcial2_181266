#include <stdio.h>

int main()
{
	int v1,v2,v3;
	
	printf("Asigne 1 valor: ");
	scanf("%d",&v1);
	printf("Asigne 2 valor: ");
	scanf("%d",&v2);
	printf("Asigne 3 valor: ");
	scanf("%d",&v3);
		//si se tiene 1 2 3 despues va 3 1 2
	int temporal=v1;
	v1=v3;
	v3=v2;
	v2=temporal;
	
	printf("%d  %d  %d",v1,v2,v3);
	
	return 0;
}
