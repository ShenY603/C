#include <stdio.h>
#include <math.h>
struct student
	{
		int num=0;
		char name[10];
		int c1=0;
		int c2=0;
		int c3=0;
		float ave=0.0;
	} a[100];
int main()
{
	int n=0,i=0,j=0;
	struct student t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %s %d %d %d",&a[i].num,&a[i].name,&a[i].c1,&a[i].c2,&a[i].c3);
		a[i].ave=(a[i].c1+a[i].c2+a[i].c3)/3.0;	
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j].ave<a[j+1].ave)
			{
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
			if(a[j].ave==a[j+1].ave)
			{
				if(a[j].num>a[j+1].num)
				{
					t=a[j];
					a[j]=a[j+1];
					a[j+1]=a[j];
				}
			}
			
		}
		
				
	}	
	for(i=0;i<n;i++)
	{
		printf("%d %s %.1f\n",a[i].num,a[i].name,a[i].ave);
	}
	
	
	
	
	
	return 0;
 } 
