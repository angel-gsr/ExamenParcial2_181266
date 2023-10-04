#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main()
{
	/*valor semilla para obtener siempredistintos valores aleatorios*/
	srand(time(NULL));
	int i=0,r1,r2,d,suma,resta,mult,div,times;
	//valores en un rango
	//rand() % (maximo + 1 - minimo) + minimo
	printf("Cuantas veces quiere realizar?");
	scanf("%d",&times);
	
	while(i<times)
	{
		r1=rand() % (5+1-1) +1;
		//valores aleatorios de 0 a 10
		r2=rand() %10;
		printf("%d\n",r1);
		printf("%d\n",r2);
		
		printf("Que desea hacer? \n1)Suma \n2)Resta \n3)Multiplicacion \n4)Division \n");
		scanf("%d",&d);
		
		switch (d)
		{
			case 1:
				suma=r1+r2;
				printf("%d+%d=%d \n",r1,r2,suma);
				break;
			case 2:
				resta=r1-r2;
				printf("%d+%d=%d \n",r1,r2,resta);
				break;
			case 3:
				mult=r1*r2;
				printf("%d+%d=%d \n",r1,r2,mult);
				break;
			case 4:
				div=r1/r2;
				printf("%d+%d=%d \n",r1,r2,suma);
				break;
			
			default:
				printf("Esta opcion no esta \n");
				break;
		}
		i++;
	}
	
	return 0;
}
