#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
int pre[30001] = {0};
int size[30001] ;
void initial(int n)
{
    for(int i = 0 ; i < n ; ++i) 
	{
        size[i] = 1;
        pre[i] = i;
    }
}
int find(int n)
{
    if(pre[n] != n) pre[n] = find(pre[n]);
    return pre[n];
}

void Union(int x, int y)
{
    pre[x] = y;
    size[y] += size[x];
}


int main()
{
    int num = 0;
    scanf("%d", &num);
    while(num--)
    {
        int n,m;
        int s = 0;
        scanf("%d %d", &n, &m);
        initial(n);
        while(m--)
        {
            int input1,input2;
            scanf("%d %d", &input1, &input2);
            int x = find(input1);
            int y = find(input2);
            if(x != y)
            {
                Union(x,y);
            }

        }
        int ans = 0;
        for(int i = 0 ; i < n ; ++i)
		{
            ans = ans > size[i] ? ans : size[i];
        }
        printf("%d\n",ans);
    }
    return 0;
}
