#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)
int main()
{
	int n,m;
	int time = 1;
	bool fir = false;
	int map[101][101] = {0};
	while(~scanf("%d %d", &n,&m) && n && m)
	{
		if(fir)
		{
			printf("\n");
		}
		fir = true;
		
		while(getchar() !='\n'){}
		for(int i = 1 ; i <= n ; ++i)
		{
			for(int j = 1 ; j <= m ; ++j)
			{
				scanf("%c",&map[i][j]);
				if(map[i][j] == '*'){}
				else 
				{
					map[i][j] = 0;
				}
			}
			while(getchar() !='\n'){}
		}
		for(int i = 1 ; i <= n ; ++i)
		{
			for(int j = 1 ; j <= m ; ++j)
			{
				if(map[i][j] == '*')
				{
					for(int y = i -1 ; y <= i + 1 ; ++y)
					{
						for(int x = j -1 ; x <= j + 1 ; ++x)
						{
							if(map[y][x] == '*')
							{}
							else
							{
								map[y][x]++;
							}
						}
					}
				}
			}
		}		
		
		printf("Field #%d:\n",time++);
		for(int i = 1 ; i <= n ; ++i)
		{
			for(int j = 1 ; j <= m ; ++j)
			{
				if(map[i][j] == '*') printf("%c",map[i][j]);
				else printf("%d",map[i][j]);
			
			}
			printf("\n");
		}
	
	}
	return 0;
}