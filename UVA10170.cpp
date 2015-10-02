#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

int main()
{
	long long int s = 0, d = 0, day =0;
	while(scanf("%lld %lld",&s,&d) != EOF)
	{
		
		while(1)
		{
			day += s;
			if(day >= d)
			{
				printf("%lld\n",s);
				break;
			}
			++s;
		}
		day = 0;
	}

	return 0;
}