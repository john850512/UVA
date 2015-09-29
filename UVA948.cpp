#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable:4996)

int n = 0;
int fib[100] = {0,1};

void newfib()
{
	for(int i = 2 ;i <= 40 ; ++i)
	{
		fib[i] = fib[i-1] + fib[i-2];
	}
}


int main()
{
	int ans[41] = {0};
	int inputnum = 0;
	long temp = 0;
	long input = 0;
	
	newfib();
	scanf("%d",&inputnum);

	while(inputnum--)
	{
		bool ifzero = true;
		memset(ans,-1,sizeof(ans));
		scanf("%ld",&input);
	
		temp = input;
		for(int i = 40 ; i >= 2 ; --i)
		{
			if(temp >= fib[i])
			{
				ans[40-i] = 1;
				temp -= fib[i];
				ifzero = false;
			}
			else
			{
				if(ifzero == false)
				{
					ans[40-i] = 0;
				}
			}
		}
		printf("%ld = ",input);
		for(int i = 0 ; i< 41 ; ++i)
		{
			if(ans[i] == -1)
			{
			}
			else
			{
				printf("%ld",ans[i]);
			}
		}
		printf(" (fib)\n");
	}
	
	
	return 0;
}
