#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#pragma warning(disable:4996)
int main()
{
	char std[] ="`1234567890-="
				"qwertyuiop[]\\"
				"asdfghjkl;'"
				"zxcvbnm,./";
	char input[1000] = {0};
	while(gets(input))
	{
		for(int i = 0; i<1000 ; i++)
		{
			for(int b = 0 ; b < 47 ; b++)
			{
				if(input[i] == toupper(std[b]))
				{
					//printf("%c %c %d\n",input[i],std[b-1],b);
					input[i] = toupper(std[b-1]);
				}
			}
		}
		printf("%s\n",input);	
	}			

	return 0;
}