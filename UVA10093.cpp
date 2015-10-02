#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#pragma warning(disable:4996)

void chat(char input[],int n)
{
		if(isdigit(input[n]))
		{
			input[n] = input[n] - 48;
		}
		else if(isupper(input[n]))
		{
			input[n] = input[n] - 55; // -65 +10
		}
		else if(islower(input[n]))
		{
			input[n] = input[n] - 61; // -97 +10 +26
		}
		else
		{
			input[n] = 0;
		}
	
}

int main()
{
	char input[1000];
	int i = 0;
	int sum = 0;
	int max = 1;
	while(gets(input))
	{
		
		while(input[i] != '\0')//for(int i = 0;input[i];i++)
		{
			
			chat(input,i);
			sum += input[i]; 
			//printf("%d %d\n",input[i],sum);
			if(input[i] > max)
			{
				max = input[i];
			}
			i++;
		}
		
		//printf("max is %d\n",max);
		for(int i = max ; i <= 62 ; ++i)
		{
			if(sum % i == 0)
			{
				printf("%d\n",i+1);
				break;
			}
			if(i == 62)
			{
				printf("such number is impossible!\n");
			}
		}
		sum = 0;
		i = 0;
		max = 1;
		memset(input,0,sizeof(input));
	}




	return 0;
}