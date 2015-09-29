#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
bool map[200+1][200+1];
bool used[200+1][200+1];
bool usedpoint[200+1];
bool color[200+1];
bool end = false;
void init()
{
	for(int i = 0 ; i < 201 ; ++i)
	{
		for(int j = 0 ; j < 201 ; ++j) 
		{
			map[i][j] = map[j][i] = false;
			used[i][j] = used[j][i] = false;
		}
		color[i] = false;
		usedpoint[i] = false;
	}
	usedpoint[0] = true;
}

void dfs(int n,int l,int edge,int node)
{
	if(edge > l-1)
	{
		printf("BICOLORABLE.\n");
		end = true;
	}
	if(end){}
	else
	{		
		for(int i = 0 ; i < n ; ++i)
		{
			if(!used[node][i] && map[node][i])
			{
				//printf("%d %d %d\n",node,i,usedpoint[i]);		
				if(color[node] == color[i] && usedpoint[i] && edge > 0) 
				{
					printf("NOT BICOLORABLE.\n");
					used[node][i] = used[i][node] = true;
					break;
				}	
				usedpoint[i] = true;	
				used[node][i] = used[i][node] = true;
				color[i] = !color[node];	
				//printf("%d %d %d %d %d\n",color[node],color[i],node,i,edge);
				dfs(n,l,++edge,i);
			}	
		}
	}
}


int main()
{
	int n = 0;
	int l = 0;
	int node1,node2;

	while(~scanf("%d",&n) && n)
	{
		scanf("%d",&l);
		init();
		end = false;
		for(int i = 0 ; i < l ; ++i)
		{
			scanf("%d %d",&node1,&node2);
			map[node1][node2] = 1;
			map[node2][node1] = 1;
		}
		dfs(n,l,0,0);
	}

	return 0;
}