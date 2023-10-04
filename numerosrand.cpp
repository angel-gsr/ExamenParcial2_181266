#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main()
{
	/*valor semilla para obtener siempredistintos valores aleatorios*/
	srand(time(NULL));
	int i=1,r1,r2,d,times;
	float div,suma,resta,mult;
	//valores en un rango
	//rand() % (maximo + 1 - minimo) + minimo
	printf("Cuantas veces quiere realizar? ");
	scanf("%d",&times);
	
	while(i<=times)
	{
		printf("\n----------%d vez------------\n",i);
		
		r1=rand() % (5+1-1) +1;
		//valores aleatorios de 0 a 10
		r2=rand() %10;
		printf("\t Aleatorio 1: %d\n",r1);
		printf("\t Aleatorio 2: %d\n",r2);
		
		printf("Que desea hacer? \n 1)Suma \n 2)Resta \n 3)Multiplicacion \n 4)Division \n");
		scanf("%d",&d);
		
		switch (d)
		{
			case 1:
				suma=r1+r2;
				printf("%d+%d=%f \n",r1,r2,suma);
				break;
			case 2:
				resta=r1-r2;
				printf("%d-%d=%f \n",r1,r2,resta);
				break;
			case 3:
				mult=r1*r2;
				printf("%d*%d=%f \n",r1,r2,mult);
				break;
			case 4:
				div=static_cast<float>(r1)/(r2);
				printf("%d/%d=%f \n",r1,r2,div);
				break;
			
			default:
				printf("Esta opcion no esta \n");
				break;
		}
		i++;
	}
	
	return 0;
}
