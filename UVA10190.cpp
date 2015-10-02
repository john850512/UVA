#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

int main()
{
	long input1 = 0;
	long input2 = 0;
	
	while( scanf("%ld %ld", &input1, &input2) != EOF )
	{
		long m = (input1 >= input2 ? input1 :input2 );
		long n = (input1 >= input2 ? input2 :input1 );
		bool flag = true;
		long temp = m;
		while(1)
		{
			if(temp % n == 0 && n != 1)
			{
				temp /= n;
			}
			else if(temp == 1 && n != 1)
			{
				break;
			}
			else 
			{
				flag = false;
				break;
			}
		}
		
		while(1)
		{
			if(flag == false)
			{
				printf("Boring!\n");
				break;
			}
			else
			{
				if(m % n == 0 && n != 1)
				{
					printf("%ld ",m);
					m /= n;
				}
				else if(m == 1 && n != 1)
				{
					printf("%ld\n",m);
					break;
				}
				else 
				{
					printf("Boring!\n");
					break;
				}
			}
		}
		//printf("%ld %ld \n",input1,input2);
	}

	return 0;
}