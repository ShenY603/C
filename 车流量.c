#include <stdio.h>

int main()
{
	int a,b,m,i,c;


		for(i=0;;i++)
		{
			scanf("%d",&m);
			if(m!=0)
			{
			a=m/90;b=m%90;
			if(b>=0&&b<60) c=a*60*3+b*3;
			else c=a*60*3+180;
			printf("%d ",c);
			}
			else return 0;
		}
 
	
	return 0;
 } 
