//99³Ë·¨±í 
#include <stdio.h>
#include <windows.h>
int main()
{	system("color 1");
	for (int i=1;i<10;i++)
	{
	for	(int j=1;j<=i;j++)printf("%d*%d=%-3d",i,j,i*j);
	printf("\n");
	}
	 return 0;
}
