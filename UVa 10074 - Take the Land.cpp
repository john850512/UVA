#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main()
{
	int m,n;

	while(~scanf("%d %d", &m, &n) && m && n)
	{
		int max = 0;
		int map[101][101] = {0};
		for(int i = 1 ; i <=m ; ++i)
		{
			for(int j = 1 ; j <= n ; ++j)
			{
				scanf("%d",&map[i][j]);
				if(map[i][j] == 0) 
				{
					map[i][j]++;
					map[i][j] += map[i-1][j];
				}
				else if(map[i][j] == 1) 
				{
					map[i][j] = 0;
				}
			}
			for(int j = 1 ;  j <= n ; ++j)
			{
				int value = map[i][j];
				int temp = value;

				for(int k = j + 1 ; k <= n && map[i][k] >=value ; ++k) temp += value;
				for(int k = j - 1 ; k >= 1 && map[i][k] >=value ; --k) temp += value;
				max = temp > max ? temp : max;
			}
			//printf("%d %d\n",max,i);
		}
		printf("%d\n",max);

	}
	return 0;
}