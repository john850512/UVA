//UVA100
//The 3n+1 problem

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

long int findnumber(long int a)
{
	long int x = 1;
	
	while(1)
	{
		
		if(a == 1)
		{
			return x;
			break;
		}
		else
		{
			if(a % 2 == 1)
			{
				a = (3*a)+1;
				x++;
			}
			else
			{
				a = a/2;
				x++;
			}
		}
	}
}





int main()
{
	long int a1 = 0;
	long int a2 = 0;
	int number[100000] = {0};
	long int maxnumber = 0;
	
	long int i = 0;
	long int n = 0; 
	long int z = 0;
	
	while(scanf("%d",&a1) != EOF)
	{
		scanf("%d",&a2);
		if(a1 < a2)
		{
			for(i=a1;i<=a2;i++)
			{
					number[n] = findnumber(i);
					//printf("%d\n",number[n]);
					n++;
			}
		}
		else
		{
			for(i=a2;i<=a1;i++)
			{
					number[n] = findnumber(i);
					//printf("%d\n",number[n]);
					n++;
			}
		}
			
		for(z=0;z<n;z++)
		{
			if (number[z]>maxnumber)
			{
				maxnumber = number[z];
				
			}
			else
			{
			
			}
		}
		
		printf("%d %d %d",a1,a2,maxnumber);
		printf("\n");
		a1 = 0;
		a2 = 0;
		n = 0;
		maxnumber = 0;
		memset(number,0,sizeof(number));
		
	}
	






	return 0;
}
