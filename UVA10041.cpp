#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#pragma warning(disable:4996)
 
int main()
{
	int a = 0;
	int b = 0;
	int array[500] = {0};
	int n = 0;
	int temp = 0;
	int mid = 0;
	int sum = 0;
	
	scanf("%d",&a);
	
	while(a--)
	{
		scanf("%d",&b);
		while(b--)
		{
			scanf("%d",&array[n]);
			n++;	
		}

		for(int i = 0; i<n ; i++)
		{
			for(int z = 0; z<(n-1) ;z++)
			{
				if(array[z] > array[z+1])
				{
					temp = array[z];
					array[z] = array[z+1];
					array[z+1] = temp;
				}
			}
		}

		if(n % 2 == 0)
		{
			mid = n / 2;
			for(int i = 0 ; i<n ; i++)
			{
				sum += abs(array[mid]-array[i]);
			}
		}
		else
		{
			mid = (n-1) / 2;
			for(int i = 0 ; i<n ; i++)
			{
				sum += abs(array[mid]-array[i]);
			}
		}

		printf("%d\n",sum);		
		
		memset(array,0,sizeof(array));
		n = 0;
		sum = 0;
		
	}
	



	return 0;
}