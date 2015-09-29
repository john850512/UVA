#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable:4996)
//測資過不了~不知WHY

int main()
{
	int n = 0;
	bool first = false;
	while(~scanf("%d",&n))
	{
		if(n == 0)
		{
			break;
		}
		if(first)
		{
			printf("\n");
		}
		first = true;

		int a = 0;
		char a1[10] = {0};
		int b = 0;
		char b1[10] = {0};
		bool used[10]; //false = 沒用過
		bool hasans = false;


		for(b = 01234 ; b <= 98765 ; ++b)
		{
			for(int i = 0 ; i< 10 ; ++i)
			{
				used[i] = false;
			}
			bool flag = true;

			a = b * n;
			if(a > 98765)
			{
				flag = false;
				break;
			}
			sprintf(a1,"%05d",a);
			sprintf(b1,"%05d",b);
			for(int j = 0 ; j < 5 ; ++j)//判斷b1重複 
			{
				if(!used[b1[j]-'0'])
				{
					used[b1[j]-'0'] = true;
				}
				else
				{
					flag = false;
					break;
				}
			}
			for(int i = 0 ; i < 5 ; ++i) //判斷a1的重複
			{
				if(!used[a1[i]-'0'])
				{
					used[a1[i]-'0'] = true;
				}
				else
				{
					flag = false;
					break;
				}
			}
			if(flag)
			{
				printf("%s / %05s = %d\n",a1,b1,n);
				hasans = true;
			}
		}
		if(!hasans)
		{
			printf("There are no solutions for %d.\n",n);
		}

	}

	return 0;
}