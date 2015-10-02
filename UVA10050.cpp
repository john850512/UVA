#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
	int n = 0;
	int d[3650] = {0};
	int num[100] = {0};
	int day = 0;
	
	int x = 0;
	int b = 0;
	int ans = 0;
	
	int sum = 0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&day);
		for(int i = 1 ; i <= day ;i++)
		{
			d[i] = 0;
		}
		scanf("%d",&b);
		for(int x1 = 0 ; x1 < b ;x1++)
		{
			scanf("%d",&num[x1]);
			
		}
		

		for(x = 0 ; x<b ; x++)
		{
		//	printf("1 1 %d\n",num[x]);
			sum = num[x];
			while(sum <= day)
			{
				
				if(sum % 7 == 6)
				{}
				else if (sum % 7 == 0 && sum != 0)
				{
				}
				else
				{
					if(d[sum] == 1)
					{}
					else
					{
					d[sum] = 1;
					ans++;
				//	printf("%d %d \n",sum,ans);
					}
				}
				sum += num[x];
			}
		}
		printf("%d\n",ans);
		memset(d,0,sizeof(d));
		memset(num,0,sizeof(num));
		sum = 0;
		ans = 0;
		
	}
}
