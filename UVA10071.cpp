#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main()
{
	int input1 = 0;
	int input2 = 0;

	while(scanf("%d",&input1) != EOF)
	{
		scanf("%d",&input2);
		printf("%d\n",(input1 * input2 )*2);
	}

	return 0;
}