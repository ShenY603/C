//99�˷��� 
#include <stdio.h>
int main()
{
	printf("\n");
	for (int i=1;i<10;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d*%d=%-3d",i,j,i*j);
		}
		printf("\n");
	 } 
	 return 0;
	}
