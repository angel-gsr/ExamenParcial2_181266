#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    srand(time(NULL));

    int times=2;  
    int d;
    
    do {
        d=rand()%5+1;
        float r1=(float)(rand() % 100 + 1);
        float r2=(float)(rand() % 100 + 1);
        float res;

        for (int i=0;i<times;i++) 
		{
            switch (d) 
			{
                case 1:
                    res=r1+r2;
                    printf("Suma: %.2f + %.2f = %.2f\n",r1,r2,res);
                    break;
                case 2:
                    res=r1-r2;
                    printf("Resta: %.2f - %.2f = %.2f\n",r1,r2,res);
                    break;
                case 3:
                    res=r1*r2;
                    printf("Multiplicacion: %.2f * %.2f = %.2f\n",r1,r2,res);
                    break;
                case 4:
                    res=r1/r2;
                    printf("Division: %.2f / %.2f = %.2f\n",r1,r2,res);
                    break;
                default:
                    break;
            }
        }
    }while(d!=5);
    
	printf("Fin :)");

    return 0;
}
