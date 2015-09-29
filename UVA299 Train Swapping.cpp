#include <stdio.h>
#include <stdlib.h>
#define swap(a,b) {int temp = a ; a = b ; b = temp;}
#pragma warning(disable:4996)
int main()
{
	int n = 0;
	scanf("%d",&n);
	while(n--)
	{
		int arr[51] = {0};
		int testnum = 0;
		int ans = 0;
		scanf("%d",&testnum);
		for(int i = 0 ; i < testnum ; ++i)
		{
			scanf("%d",&arr[i]);
		}
		for(int i = testnum -1 ; i >=0 ; --i)
		{
			for(int j = 0 ; j < i ; ++j)
			{
				
				if(arr[j] > arr[j+1]) 
				{
					//printf("%d %d\n",arr[j],arr[j+1]);
					swap(arr[j],arr[j+1]);
					//printf("%d %d\n",arr[j],arr[j+1]);
					ans++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",ans);
		
	}


	return 0;
}