#include <stdio.h>
#include <string.h>

int main()
{
	char a[100]={0};
	int n=0,i=0;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]>=65&&a[i]<=77||a[i]>=97&&a[i]<=109)
			a[i]=a[i]+13;
		else if(a[i]>77&&a[i]<=90||a[i]>109&&a[i]<=122)
			a[i]=a[i]-13;
	}
	printf("%s",a);
	
	return 0;
}
