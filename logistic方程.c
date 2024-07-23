#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int i=0;
	float r=0.0;
	float x[2000]={0.0};
	scanf("%f %f",&x[1],&r);
	for(i=2;i<=1000;i++)
	{
		x[i]=r*x[i-1]*(1-x[i-1]);
		if(fabs(x[i]-x[i-1])<0.00001)
		{
			printf("%.4f 1",x[i]);
			return 0;
		}
	}
	printf("%.4f 0",x[1000]);
	return 0;
}
