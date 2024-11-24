#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int n=0,p=0;
	int i=0,j=0;
	char s[100];
	scanf("%s",s);
	n=strlen(s);
	for(i=1;i<=n;i++){
		if(n%i==0){
			p=1;
			for(j=i;j<n;j++){
				if(s[j]!=s[j%i]){
					p=0;
					break;
				}
		
			}	
			if(p==1)
			{
				printf("%d",i);
					return 0;
			}
			
		}		
		
	
	}
	
	
	
	
	
	return 0;
 } 
