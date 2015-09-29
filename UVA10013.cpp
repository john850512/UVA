#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#define max 100000

int main()
{
	int n = 0;
	bool fir = true;
	scanf("%d",&n);
	while(n--)
	{
		if(!fir)
		{
			printf("\n");
		}
		fir = false;
		int o1[max] = {0};
		int o2[max] = {0};
		int m = 0;	
		scanf("%d",&m);
		for(int i = 0 ; i < m ; ++i)
		{
			scanf("%d %d",&o1[i],&o2[i]);
			o1[i] += o2[i];
		}
		for(int i = m-1 ; i > 0 ; --i)
		{		
			o1[i-1] += o1[i] / 10; 
			o1[i] %= 10;				
		}
		for(int i = 0 ; i < m ; ++i)
		{
			printf("%d",o1[i]);
		}			
		printf("\n");
	}
	return 0;
}