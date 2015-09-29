#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

bool path[6][6];
bool used[6][6];
int ans[8] = {0};
void backtracking(int len , int node)
{
	if(len  == 8)
	{
		for(int i = 0 ; i < 8 ; ++i)
		{
			printf("%d",ans[i]);
		}
		printf("%d\n",node);
		return;
	}
	ans[len] = node;
	for(int i = 1 ; i < 6 ; ++i)
	{
		if(path[node][i] && !used[node][i])
		{
			used[node][i] = used[i][node] = true;
			backtracking(len+1,i);
			used[node][i] = used[i][node] = false;
		}
	}
	
}
int main()
{
	path[1][2] = path[1][3] = path[1][5] = 1;
	path[2][1] = path[3][1] = path[5][1] = 1;
	path[2][5] = path[2][3] = 1;
	path[5][2] = path[3][2] = 1;
	path[5][3] = path[5][4] = 1;
	path[3][5] = path[4][5] = 1;
	path[3][4] = path[4][3] = 1;

	backtracking(0,1);

	return 0;
}
